#include <liteloader/Config.h>
#include <llapi/EventAPI.h>
#include <llapi/Global.h>
#include <llapi/LoggerAPI.h>
#include <llapi/mc/ActorDamageSource.hpp>
#include <llapi/mc/BaseCommandBlock.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockActor.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/CommandContext.hpp>
#include <llapi/mc/CommandOrigin.hpp>
#include <llapi/mc/ConnectionRequest.hpp>
#include <llapi/mc/GameMode.hpp>
#include <llapi/mc/HitResult.hpp>
#include <llapi/mc/ItemActor.hpp>
#include <llapi/mc/PistonBlockActor.hpp>
#include <llapi/mc/ComplexInventoryTransaction.hpp>
#include <llapi/mc/SignItem.hpp>
#include <llapi/mc/InventoryTransaction.hpp>
#include <llapi/mc/ItemStack.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/ChestBlockActor.hpp>
#include <llapi/mc/NetworkIdentifier.hpp>
#include <llapi/mc/Objective.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/PlayerActionPacket.hpp>
#include <llapi/mc/RespawnPacket.hpp>
#include <llapi/mc/Scoreboard.hpp>
// #include <llapi/mc/NpcActionsContainer.hpp>
// #include <llapi/mc/NpcSceneDialogueData.hpp>
#include <llapi/mc/ArmorStand.hpp>
#include <llapi/mc/NpcAction.hpp>
#include <llapi/mc/NpcComponent.hpp>
#include <llapi/mc/Container.hpp>
#include <llapi/mc/ScoreboardId.hpp>
#include <llapi/mc/ServerNetworkHandler.hpp>
#include <llapi/mc/VanillaBlocks.hpp>
#include <llapi/mc/ActorDamageSource.hpp>
#include <llapi/ScheduleAPI.h>
#include <llapi/mc/ServerPlayer.hpp>
// #include <RegCommandAPI.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/utils/DbgHelper.h>
#include <llapi/I18nAPI.h>
#include <functional>
#include <tuple>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <llapi/mc/ComplexInventoryTransaction.hpp>
#include <llapi/mc/InventoryTransaction.hpp>
#include <llapi/mc/InventoryAction.hpp>
// #include <llapi/mc/InventorySource.hpp>
#include <llapi/mc/Util.hpp>
#include <llapi/DynamicCommandAPI.h>
#include <llapi/mc/ResourcePackManager.hpp>
#include <llapi/mc/ResourceLocation.hpp>
#include <llapi/mc/PackSourceFactory.hpp>
#include <llapi/mc/CompositePackSource.hpp>
// #include <llapi/mc/ResourcePackPaths.hpp>
#include <llapi/mc/DirectoryPackSource.hpp>
#include <llapi/mc/PackSource.hpp>
#include <llapi/mc/TextPacket.hpp>

static_assert(offsetof(InventoryAction, source) == 0x0);
static_assert(offsetof(InventoryAction, slot) == 0x0c);
static_assert(offsetof(InventorySource, type) == 0x0);
static_assert(offsetof(InventorySource, container) == 0x04);
static_assert(offsetof(InventorySource, flags) == 0x08);
static_assert(offsetof(ComplexInventoryTransaction, type) == 0x08);
static_assert(offsetof(ComplexInventoryTransaction, data) == 0x10);
static_assert(offsetof(InventoryTransaction, actions) == 0x0);
static_assert(offsetof(InventoryTransaction, items) == 0x40);

using namespace Event;
using std::vector;
extern Logger logger;

/////////////////////////////// Event Data ///////////////////////////////

int globalListenerId = 0;

template <typename EVENT>
struct ListenerData {
    std::string pluginName;
    int listenerId;
    bool isRef;
    std::function<bool(EVENT)> callback;
    std::function<bool(EVENT&)> callbackRef;
};

template <typename EVENT>
std::list<ListenerData<EVENT>> listeners;


/////////////////////////////// Listener Manager ///////////////////////////////

template <typename EVENT>
int EventManager<EVENT>::addEventListener(std::string name, std::function<bool(EVENT)> callback) {
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({name, newId, false, callback, nullptr});
    return newId;
}

template <typename EVENT>
int EventManager<EVENT>::addEventListenerRef(std::string name, std::function<bool(EVENT&)> callback) {
    int newId = ++globalListenerId;
    listeners<EVENT>.push_back({name, newId, true, nullptr, callback});
    return newId;
}

template <typename EVENT>
bool EventManager<EVENT>::removeEventListener(int id) {
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i)
        if (i->listenerId == id) {
            listeners<EVENT>.erase(i);
            return true;
        }
    return false;
}

template <typename EVENT>
bool EventManager<EVENT>::hasListener() {
    return !listeners<EVENT>.empty();
}


/////////////////////////////// Event Calling ///////////////////////////////

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string eventName, std::string pluginName) {
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Event ({})", eventName);
    if (!pluginName.empty()) {
        auto plugin = ll::getPlugin(pluginName);
        if (plugin) {
            logger.error("In Plugin <{} {}>", plugin->name, plugin->version.toString());
        } else {
            logger.error("In Plugin <{}>", pluginName);
        }
    }
}

template <typename EVENT>
bool EventManager<EVENT>::call(EVENT& ev) {
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i) {
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res)
                passToBDS = false;
        } catch (const seh_exception& e) {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (const std::exception& e) {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (...) {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }


    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto iNoConst = ev.listenersNoConst.begin();
    try {
        for (; iNoConst != ev.listenersNoConst.end(); ++iNoConst)
            if (!iNoConst->second(ev))
                passToBDS = false;
    } catch (const seh_exception& e) { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first); } catch (const std::exception& e) {
        OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), iNoConst->first);
    } catch (...) { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), iNoConst->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////
    auto i = ev.listeners.begin();
    try {
        for (; i != ev.listeners.end(); ++i)
            if (!i->second(ev))
                passToBDS = false;
    } catch (const seh_exception& e) { OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first); } catch (const std::exception& e) {
        OutputError("Uncaught Exception Detected! ", -1, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->first);
    } catch (...) { OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->first); }
    ///////////////////////////////////// For compatibility DO NOT UPDATE /////////////////////////////////////

    return passToBDS;
}

template <typename EVENT>
bool EventManager<EVENT>::callToPlugin(std::string pluginName, EVENT& ev) {
    bool passToBDS = true;
    for (auto i = listeners<EVENT>.begin(); i != listeners<EVENT>.end(); ++i) {
        if (i->pluginName != pluginName)
            continue;
        try {
            bool res = i->isRef ? i->callbackRef(ev) : i->callback(ev);
            if (!res)
                passToBDS = false;
        } catch (const seh_exception& e) {
            OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (const std::exception& e) {
            OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), typeid(EVENT).name(), i->pluginName);
        } catch (...) {
            OutputError("Uncaught Exception Detected!", -1, "", typeid(EVENT).name(), i->pluginName);
        }
    }
    return passToBDS;
}


/////////////////////////////// Event Declare ///////////////////////////////

#define DECLARE_EVENT_DATA(EVENT)                                                                    \
    template class Event::EventManager<EVENT>;                                                              \
    /*********************** For Compatibility ***********************/                              \
    std::list<std::pair<string, std::function<bool(const EVENT&)>>> EventTemplate<EVENT>::listeners; \
    std::list<std::pair<string, std::function<bool(EVENT&)>>> EventTemplate<EVENT>::listenersNoConst;

DECLARE_EVENT_DATA(PlayerPreJoinEvent);
DECLARE_EVENT_DATA(PlayerJoinEvent);
DECLARE_EVENT_DATA(PlayerLeftEvent);
DECLARE_EVENT_DATA(PlayerRespawnEvent);
DECLARE_EVENT_DATA(PlayerChatEvent);
DECLARE_EVENT_DATA(PlayerUseItemEvent);
DECLARE_EVENT_DATA(PlayerUseItemOnEvent);
DECLARE_EVENT_DATA(PlayerChangeDimEvent);
DECLARE_EVENT_DATA(PlayerJumpEvent);
DECLARE_EVENT_DATA(PlayerSneakEvent);
DECLARE_EVENT_DATA(PlayerAttackEvent);
DECLARE_EVENT_DATA(PlayerAttackBlockEvent);
DECLARE_EVENT_DATA(PlayerDieEvent);
DECLARE_EVENT_DATA(PlayerPickupItemEvent);
DECLARE_EVENT_DATA(PlayerDropItemEvent);
DECLARE_EVENT_DATA(PlayerEatEvent);
DECLARE_EVENT_DATA(PlayerConsumeTotemEvent);
DECLARE_EVENT_DATA(PlayerCmdEvent);
DECLARE_EVENT_DATA(PlayerDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerPlaceBlockEvent);
DECLARE_EVENT_DATA(BlockPlacedByPlayerEvent);
DECLARE_EVENT_DATA(PlayerEffectChangedEvent);
DECLARE_EVENT_DATA(PlayerStartDestroyBlockEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerEvent);
DECLARE_EVENT_DATA(PlayerCloseContainerEvent);
DECLARE_EVENT_DATA(PlayerInventoryChangeEvent);
DECLARE_EVENT_DATA(PlayerMoveEvent);
DECLARE_EVENT_DATA(PlayerSprintEvent);
DECLARE_EVENT_DATA(PlayerSetArmorEvent);
DECLARE_EVENT_DATA(PlayerUseRespawnAnchorEvent);
DECLARE_EVENT_DATA(PlayerOpenContainerScreenEvent);
DECLARE_EVENT_DATA(PlayerUseFrameBlockEvent);
DECLARE_EVENT_DATA(PlayerExperienceAddEvent);
DECLARE_EVENT_DATA(PlayerInteractEntityEvent);
DECLARE_EVENT_DATA(MobHurtEvent);
DECLARE_EVENT_DATA(MobDieEvent);
DECLARE_EVENT_DATA(EntityExplodeEvent);
DECLARE_EVENT_DATA(ProjectileHitEntityEvent);
DECLARE_EVENT_DATA(WitherBossDestroyEvent);
DECLARE_EVENT_DATA(EntityRideEvent);
DECLARE_EVENT_DATA(EntityStepOnPressurePlateEvent);
DECLARE_EVENT_DATA(NpcCmdEvent);
DECLARE_EVENT_DATA(ProjectileSpawnEvent);
DECLARE_EVENT_DATA(ProjectileCreatedEvent);
DECLARE_EVENT_DATA(EntityTransformEvent);
DECLARE_EVENT_DATA(BlockInteractedEvent);
DECLARE_EVENT_DATA(ArmorStandChangeEvent);
DECLARE_EVENT_DATA(BlockExplodeEvent);
DECLARE_EVENT_DATA(ContainerChangeEvent);
DECLARE_EVENT_DATA(PistonPushEvent);
DECLARE_EVENT_DATA(PistonTryPushEvent);
DECLARE_EVENT_DATA(RedStoneUpdateEvent);
DECLARE_EVENT_DATA(BlockExplodedEvent);
DECLARE_EVENT_DATA(LiquidSpreadEvent);
DECLARE_EVENT_DATA(ProjectileHitBlockEvent);
DECLARE_EVENT_DATA(HopperSearchItemEvent);
DECLARE_EVENT_DATA(HopperPushOutEvent);
DECLARE_EVENT_DATA(BlockChangedEvent);
DECLARE_EVENT_DATA(FarmLandDecayEvent);
DECLARE_EVENT_DATA(FireSpreadEvent);
DECLARE_EVENT_DATA(CmdBlockExecuteEvent);
DECLARE_EVENT_DATA(ConsoleCmdEvent);
DECLARE_EVENT_DATA(PlayerScoreChangedEvent);
DECLARE_EVENT_DATA(ConsoleOutputEvent);
DECLARE_EVENT_DATA(PostInitEvent);
DECLARE_EVENT_DATA(ServerStartedEvent);
DECLARE_EVENT_DATA(ServerStoppedEvent);
DECLARE_EVENT_DATA(RegCmdEvent);
DECLARE_EVENT_DATA(PlayerBedEnterEvent);
DECLARE_EVENT_DATA(ScriptPluginManagerEvent);
DECLARE_EVENT_DATA(MobSpawnEvent);
DECLARE_EVENT_DATA(FormResponsePacketEvent);
DECLARE_EVENT_DATA(ResourcePackInitEvent);

#define IF_LISTENED(EVENT)      \
    if (EVENT::hasListener()) { \
        try

#define IF_LISTENED_END(EVENT)                        \
    catch (...) {                                     \
        logger.error("Event Callback Failed!");       \
        logger.error("Uncaught Exception Detected!"); \
        logger.error("In Event: " #EVENT "");         \
        PrintCurrentStackTraceback();                 \
    }                                                 \
    }


/////////////////////////////// Events ///////////////////////////////


/////////////////// PreJoin ///////////////////
TClasslessInstanceHook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
                             "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
                       NetworkIdentifier* networkIdentifier,
                       ConnectionRequest* connectionRequest,
                       ServerPlayer* serverPlayer) {
    IF_LISTENED(PlayerPreJoinEvent) {
        PlayerPreJoinEvent ev{};
        ev.mPlayer = serverPlayer;
        ev.mIP = networkIdentifier->getIP();
        ev.mXUID = serverPlayer->getXuid();
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerPreJoinEvent)
    return original(this, networkIdentifier, connectionRequest, serverPlayer);
}


/////////////////// PlayerJoin ///////////////////
 TInstanceHook(bool, "?onReady_ClientGeneration@ServerNetworkHandler@@QEAAXAEAVPlayer@@AEBVNetworkIdentifier@@@Z",
              ServerNetworkHandler,Player* player,NetworkIdentifier *networkIdentifier) {
     IF_LISTENED(PlayerJoinEvent) {
         PlayerJoinEvent ev{};
         ev.mPlayer = player;

         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(PlayerJoinEvent)
     return original(this,player,networkIdentifier);
 }


/////////////////// PlayerLeft ///////////////////
 TInstanceHook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
       ServerNetworkHandler,ServerPlayer* serverPlayer,bool skipMessage) {
     IF_LISTENED(PlayerLeftEvent) {
         PlayerLeftEvent ev{};
         ev.mPlayer = serverPlayer;
         ev.mXUID = serverPlayer->getXuid();
         ev.call();
     }
     IF_LISTENED_END(PlayerLeftEvent)
     return original(this,serverPlayer,skipMessage);
 }

/////////////////// PlayerRespawn ///////////////////
TClasslessInstanceHook(void, "?handle@?$PacketHandlerDispatcherInstance@VPlayerActionPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
                       NetworkIdentifier* networkIdentifier,
                       ServerNetworkHandler* serverNetworkHandler,
                       void* pPacket) {
    PlayerActionPacket* packet = *(PlayerActionPacket**)pPacket;
    if (packet->actionType == PlayerActionType::Respawn) {
        IF_LISTENED(PlayerRespawnEvent) {
            PlayerRespawnEvent ev{};
            ev.mPlayer = packet->getPlayerFromPacket(serverNetworkHandler, networkIdentifier);
            if (!ev.mPlayer)
                return;
            ev.call();
        }
        IF_LISTENED_END(PlayerRespawnEvent)
    }
    return original(this, networkIdentifier, serverNetworkHandler, pPacket);
}

/////////////////// PlayerChat ///////////////////
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier* networkIdentifier, TextPacket* text) {
    IF_LISTENED(PlayerChatEvent) {
        Event::PlayerChatEvent ev{};
        ev.mPlayer = this->getServerPlayer(*networkIdentifier);
        if (!ev.mPlayer)
            return;
        ev.mMessage = text->mMessage;
        if (!ev.call())
            return;
        text->mMessage = ev.mMessage;
    }
    IF_LISTENED_END(PlayerChatEvent);
    return original(this, networkIdentifier, text);
}

/////////////////// PlayerChangeDim ///////////////////
class ChangeDimensionRequest {
public:
    int mState;
    AutomaticID<Dimension, int> mFromDimensionId;
    AutomaticID<Dimension, int> mToDimensionId;
    Vec3 mPosition;
    bool mUsePortal;
    bool mRespawn;
    std::unique_ptr<CompoundTag> mAgentTag;
};

// 更换符号
 TClasslessInstanceHook(bool, "?requestPlayerChangeDimension@Level@@QEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z",
                        Player* player, std::unique_ptr<ChangeDimensionRequest> request) {

     if (request->mToDimensionId == player->getDimensionId())
         return original(this, player, std::move(request));

//     printf("PlayerChangeDimension Player:%s, DimensionID:%s\n",sp->getNameTag().c_str(),request->mToDimensionId);
     IF_LISTENED(PlayerChangeDimEvent) {
         PlayerChangeDimEvent ev{};
         ev.mPlayer = player;
         ev.mToDimensionId = request->mToDimensionId;
         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(PlayerChangeDimEvent)
     return original(this, player, std::move(request));
 }


/////////////////// PlayerJump ///////////////////
TInstanceHook(void, "?jumpFromGround@Player@@UEAAXXZ", Player) {
    IF_LISTENED(PlayerJumpEvent) {
        PlayerJumpEvent ev{};
        ev.mPlayer = this;
        ev.call();
    }
    IF_LISTENED_END(PlayerJumpEvent)
    return original(this);
}

/////////////////// PlayerSneak ///////////////////
//不清楚这个符合能不能正常触发
 TClasslessInstanceHook(void, "?onActorSneakChanged@ScriptServerActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z",
                        Actor* actor, bool isSneaking) {
//     printf("PlayerSneak Player:%s, IsSneaking:%s\n",ac->getNameTag().c_str(),isSneaking);
     IF_LISTENED(PlayerSneakEvent) {
         PlayerSneakEvent ev{};
         ev.mPlayer = (Player*)actor;
         ev.mIsSneaking = isSneaking;
         ev.call();

         isSneaking = ev.mIsSneaking;
     }
     IF_LISTENED_END(PlayerSneakEvent)
     return original(this, actor, isSneaking);
 }


/////////////////// PlayerAttackEntity ///////////////////
//同名函数没有了伤害原因参数
 TInstanceHook(bool, "?attack@Player@@UEAA_NAEAVActor@@@Z",
               Player, Actor* actor) {
     IF_LISTENED(PlayerAttackEvent) {
         PlayerAttackEvent ev{};
         ev.mPlayer = this;
         ev.mTarget = actor;
         ev.mAttackDamage = this->calculateAttackDamage(*actor);
         if (!ev.call())
             return false;

         actor = ev.mTarget;
     }
     IF_LISTENED_END(PlayerAttackEvent)
     return original(this, actor);
 }

/////////////////// PlayerAttackBlock ///////////////////
//没有这个符号
// TInstanceHook(bool, "?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
//               Block, Player* pl, BlockPos* bp) {
//     IF_LISTENED(PlayerAttackBlockEvent) {
//         PlayerAttackBlockEvent ev{};
//         ev.mPlayer = pl;
//         ev.mItemStack = pl->getHandSlot();
//         ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, pl->getDimensionId());
//         if (!ev.call())
//             return false;
//     }
//     IF_LISTENED_END(PlayerAttackBlockEvent)
//     return original(this, pl, bp);
// }

/////////////////// PlayerTakeItem ///////////////////
TInstanceHook(bool, "?take@Player@@QEAA_NAEAVActor@@HH@Z",
              Player, Actor* actor, int orgCount, int favoredSlot) {
    IF_LISTENED(PlayerPickupItemEvent) {
        ItemStack* itemStack = nullptr;
        if (actor->isItemActor())
            itemStack = ((ItemActor*)actor)->getItemStack();

        PlayerPickupItemEvent ev{};
        ev.mPlayer = this;
        ev.mItemEntity = actor;
        ev.mItemStack = itemStack;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerPickupItemEvent)
    return original(this, actor, orgCount, favoredSlot);
}

namespace {
    bool isQDrop;
    bool isDieDrop;
}
/////////////////// PlayerDropItem ///////////////////
TInstanceHook(bool, "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
              Player, ItemStack* itemStack, bool randomly) {
    if (isQDrop)
        return original(this, itemStack, randomly);
    if (isDieDrop)
        return original(this, itemStack, randomly);
    IF_LISTENED(PlayerDropItemEvent) {
        PlayerDropItemEvent ev{};
        ev.mPlayer = this;
        ev.mItemStack = itemStack;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDropItemEvent)
    return original(this, itemStack, randomly);
}

/////////////////// PlayerConsumeTotem ///////////////////
TInstanceHook(void, "?consumeTotem@Player@@UEAA_NXZ", Player) {
    IF_LISTENED(PlayerConsumeTotemEvent) {
        PlayerConsumeTotemEvent ev{};
        ev.mPlayer = this;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerConsumeTotemEvent)
    return original(this);
}


/////////////////// PlayerEffectChanged ///////////////////
// add
TInstanceHook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
    IF_LISTENED(PlayerEffectChangedEvent) {
        PlayerEffectChangedEvent ev{};
        ev.mPlayer = this;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Add;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent)
    return original(this, effect);
}
// remove
TInstanceHook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
    IF_LISTENED(PlayerEffectChangedEvent) {
        PlayerEffectChangedEvent ev{};
        ev.mPlayer = this;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Remove;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent)
    return original(this, effect);
}
// update
// 更换符号
 TInstanceHook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEBVMobEffectInstance@@@Z", Player, MobEffectInstance* effect) {
     IF_LISTENED(PlayerEffectChangedEvent) {
         PlayerEffectChangedEvent ev{};
         ev.mPlayer = this;
         ev.mEventType = PlayerEffectChangedEvent::EventType::Update;
         ev.mEffect = effect;
         ev.call();
     }
     IF_LISTENED_END(PlayerEffectChangedEvent)
     return original(this, effect);
 }


/////////////////// PlayerStartDestroyBlock ///////////////////
// 没有这个符号
// 更换点位
 TClasslessInstanceHook(void, "?startDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z",
                        Player* player, BlockPos* blockPos, unsigned __int8 face, bool *hasDestroyedBlock) {
     IF_LISTENED(PlayerStartDestroyBlockEvent) {
         PlayerStartDestroyBlockEvent ev{};
         ev.mPlayer = player;
         ev.mBlockInstance = Level::getBlockInstance(blockPos, Level::getBlockSource(player));
         ev.call();
     }
     IF_LISTENED_END(PlayerStartDestroyBlockEvent)
     return original(this, player, blockPos,face,hasDestroyedBlock);
 }

/////////////////// PlayerPlaceBlock ///////////////////
#include <llapi/mc/ItemUseInventoryTransaction.hpp>
// 符号变更
 TInstanceHook(char, "?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStack@@_N@Z",
               BlockSource, Actor* actor, BlockPos* blockPos, unsigned __int8 facing, ItemStackBase* item, bool generateParticle) {
     if (actor->isPlayer()) {
         IF_LISTENED(PlayerPlaceBlockEvent) {
             auto player = (Player*)actor;
             PlayerPlaceBlockEvent ev{};
             ev.mPlayer = player;
             ev.mBlockInstance = this->getBlockInstance(*blockPos);
             if (!ev.call()) { // this pointer is not used.
                 ((ItemUseInventoryTransaction*)nullptr)->resendBlocksAroundArea(*player, *blockPos, facing);
                 return false;
             }
         }
         IF_LISTENED_END(PlayerPlaceBlockEvent)
     }
     return original(this, actor, blockPos, facing, item, generateParticle);
 }

/////////////////// BlockPlacedByPlayerEvent ///////////////////
TClasslessInstanceHook(void, "?sendBlockPlacedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z",
    Player* player, Block* block, BlockPos* blockPos, bool isUnderwater)
{
    IF_LISTENED(BlockPlacedByPlayerEvent) {
        BlockPlacedByPlayerEvent ev{};
        ev.mPlayer = player;
        ev.mBlockInstance = BlockInstance::createBlockInstance(block, *blockPos, player->getDimensionId());
        ev.call();
    }
    IF_LISTENED_END(BlockPlacedByPlayerEvent)
    original(this, player, block, blockPos, isUnderwater);
}


/////////////////// PlayerOpenContainer ///////////////////
// 符号更换
 TClasslessInstanceHook(__int64, "?onPlayerOpenContainer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4ContainerType@@AEBVBlockPos@@UActorUniqueID@@@Z",
                       Player* player, ContainerType type, BlockPos *blockPos,ActorUniqueID actorUniqueId) {
     if (player->isPlayer()) {
         IF_LISTENED(PlayerOpenContainerEvent) {
             PlayerOpenContainerEvent ev{};
             ev.mPlayer = player;
             ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
             ev.mContainer = ev.mBlockInstance.getContainer();
             if (!ev.call())
                 return 0;
         }
         IF_LISTENED_END(PlayerOpenContainerEvent)
     }
     return original(this, player,type,blockPos,actorUniqueId);
 }

/////////////////// PlayerCloseContainer ///////////////////
// chest
TInstanceHook(bool, "?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z",
              ChestBlockActor, Player* player) {
    IF_LISTENED(PlayerCloseContainerEvent) {
        BlockActor* blockActor = (BlockActor*)((char*)this - 248); // IDA ChestBlockActor::stopOpen
        BlockPos blockPos = blockActor->getPosition();

        PlayerCloseContainerEvent ev{};
        ev.mPlayer = player;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
        ev.mContainer = Level::getBlockInstance(blockPos, player->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent)
    return original(this, player);
}
// barrel
TClasslessInstanceHook(bool, "?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z",
                       Player* player) {
    IF_LISTENED(PlayerCloseContainerEvent) {
        BlockActor* blockActor = (BlockActor*)((char*)this - 248); // IDA ChestBlockActor::stopOpen
        BlockPos blockPos = blockActor->getPosition();

        PlayerCloseContainerEvent ev{};
        ev.mPlayer = player;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
        ev.mContainer = Level::getBlockInstance(blockPos, player->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent)
    return original(this, player);
}

/////////////////// PlayerInventoryChange ///////////////////
TInstanceHook(void, "?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z",
              Player, void* container, int slotNumber, ItemStack* oldItem, ItemStack* newItem, bool is) {
    IF_LISTENED(PlayerInventoryChangeEvent) {
        if (this->isPlayer()) {
            PlayerInventoryChangeEvent ev{};
            ev.mPlayer = this;
            ev.mSlot = slotNumber;
            ev.mPreviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerInventoryChangeEvent)
    return original(this, container, slotNumber, oldItem, newItem, is);
}

/////////////////// PlayerMove ///////////////////
// 更改符号
TInstanceHook(void, "?move@Player@@UEAAXAEBVVec3@@@Z",
              Player, Vec3* vec3) {
     IF_LISTENED(PlayerMoveEvent) {
         if (this->isMoving()) {
             PlayerMoveEvent ev{};
             ev.mPlayer = this;
             ev.mPos = *vec3;
             ev.call();
         }
     }
     IF_LISTENED_END(PlayerMoveEvent)
     return original(this, vec3);
 }

/////////////////// PlayerSprint ///////////////////
TInstanceHook(void, "?setSprinting@Mob@@UEAAX_N@Z",
              Mob, bool sprinting) {
    IF_LISTENED(PlayerSprintEvent) {
        if (this->isPlayer() && this->isSprinting() != sprinting) {
            PlayerSprintEvent ev{};
            ev.mPlayer = (Player*)this;
            ev.mIsSprinting = sprinting;
            if (!ev.call())
                return;

            // sprinting = ev.mIsSprinting;
        }
    }
    IF_LISTENED_END(PlayerSprintEvent)
    return original(this, sprinting);
}
#include <llapi/mc/PlayerInventory.hpp>
#include <llapi/mc/SimpleContainer.hpp>
/////////////////// PlayerSetArmor ///////////////////
 TInstanceHook(void, "?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z",
               Player, unsigned slot, ItemStack* itemStack) {
     original(this, slot, itemStack);
     IF_LISTENED(PlayerSetArmorEvent) {
         if (this->isPlayer()) {
             PlayerSetArmorEvent ev{};
             ev.mPlayer = this;
             ev.mSlot = slot;
             ev.mArmorItem = itemStack;
             if (!ev.call()) {
                 auto& uid = getUniqueID();
                 this->add(*itemStack);
                 getArmorContainer().setItem(slot, ItemStack::EMPTY_ITEM);
                 Schedule::delay([uid] {
                     auto player = Global<Level>->getPlayer(uid);
                     if (player)
                         player->refreshInventory();
                 },
                                 1);
             }
         }
     }
     IF_LISTENED_END(PlayerSetArmorEvent)
 }

/////////////////// PlayerUseRespawnAnchor ///////////////////
TInstanceHook(bool, "?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
              Player, BlockPos* blockPos, BlockSource* blockSource, Level* level) {
    IF_LISTENED(PlayerUseRespawnAnchorEvent) {
        PlayerUseRespawnAnchorEvent ev{};
        ev.mPlayer = this;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseRespawnAnchorEvent)
    return original(this, blockPos, blockSource, level);
}

/////////////////// PlayerOpenContainerScreen ///////////////////
TInstanceHook(bool, "?canOpenContainerScreen@Player@@UEAA_NXZ", Player) {
    IF_LISTENED(PlayerOpenContainerScreenEvent) {
        PlayerOpenContainerScreenEvent ev{};
        ev.mPlayer = this;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerOpenContainerScreenEvent)
    return original(this);
}

/////////////////// PlayerCmdEvent & ConsoleCmd ///////////////////
 TClasslessInstanceHook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
                        MCRESULT* mcResult, std::shared_ptr<CommandContext> context, bool print) {
     Player* player;
     string cmd;

     try {
         player = context->getOrigin().getPlayer();
         cmd = context->getCmd();
         if (!cmd.empty() && cmd.at(0) == '/') {
             cmd = cmd.substr(1, cmd.size() - 1);
         }

         if (!Util::isValidUTF8(cmd)) {
             logger.error("Detected invalid utf-8 character, command will not be executed");
             return mcResult;
         }
     } catch (...) {
         return mcResult;
     }

     if (ll::isDebugMode() && ll::globalConfig.tickThreadId != std::this_thread::get_id()) {
         logger.warn("The thread executing the command \"{}\" is not the \"MC_SERVER\" thread", cmd);
     }
     if (player) {
         // PlayerCmd
         IF_LISTENED(PlayerCmdEvent) {
             PlayerCmdEvent ev{};
             ev.mCommand = cmd;
             ev.mPlayer = player;
             ev.mResult = mcResult;

             if (!ev.call())
                 return mcResult;

             if (ev.mCommand.empty() || ev.mCommand.at(0) != '/')
                 context->getCmd() = "/" + ev.mCommand;
             else
                 context->getCmd() = ev.mCommand;
         }
         IF_LISTENED_END(PlayerCmdEvent)
     } else {
         // ConsoleCmd
         IF_LISTENED(ConsoleCmdEvent) {
             ConsoleCmdEvent ev{};
             ev.mCommand = cmd;

             if (!ev.call())
                 return mcResult;

             if (ev.mCommand.empty() || ev.mCommand.at(0) != '/')
                 context->getCmd() = "/" + ev.mCommand;
             else
                 context->getCmd() = ev.mCommand;
         }
         IF_LISTENED_END(ConsoleCmdEvent)
     }
     return original(this, mcResult, context, print);
 }

/////////////////// PlayerExperienceAddEvent ///////////////////
TInstanceHook(void, "?addExperience@Player@@UEAAXH@Z", Player, int exp) {
    IF_LISTENED(PlayerExperienceAddEvent) {
        PlayerExperienceAddEvent ev{};
        ev.mPlayer = this;
        ev.mExp = exp;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerExperienceAddEvent)
    return original(this, exp);
}

////////////// PlayerInteractEntity //////////////
TInstanceHook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
              ServerNetworkHandler, ServerPlayer* serverPlayer, bool unk) {
    IF_LISTENED(PlayerInteractEntityEvent) {
        PlayerInteractEntityEvent ev{};
        ev.mPlayer = serverPlayer;
        ev.mTargetId = dAccess<ActorRuntimeID, ll::offset::EVENTAPI_PlayerInteractEntity_1>(this);//正确
        ev.mInteractiveMode = static_cast<PlayerInteractEntityEvent::InteractiveMode>(dAccess<int, ll::offset::EVENTAPI_PlayerInteractEntity_2>(this));//看起来应该正确
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerInteractEntityEvent)

    return original(this, serverPlayer, unk);
}

/////////////////// CmdBlockExecute ///////////////////
 TInstanceHook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
               BaseCommandBlock, BlockSource* blockSource, CommandOrigin* commandOrigin, bool* markForSaving) {
     IF_LISTENED(CmdBlockExecuteEvent) {
         CmdBlockExecuteEvent ev{};
         ev.mCommand = this->getCommand();
         if ((OriginType)commandOrigin->getOriginType() == OriginType::MinecartBlock) {
             ev.mIsMinecart = true;
             ev.mMinecart = commandOrigin->getEntity();
         } else {
             ev.mIsMinecart = false;
             ev.mBlockInstance = Level::getBlockInstance(commandOrigin->getBlockPosition(), blockSource);
         }

         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(CmdBlockExecuteEvent)
     return original(this, blockSource, commandOrigin, markForSaving);
 }

/////////////////// BlockInteracted ///////////////////
TClasslessInstanceHook(unsigned short,
                       "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
                       Player* player, BlockPos* blockPos) {
    IF_LISTENED(BlockInteractedEvent) {
        BlockInteractedEvent ev{};
        ev.mPlayer = player;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(BlockInteractedEvent)
    return original(this, player, blockPos);
}

/////////////////// BlockChanged ///////////////////
// 没有这个符号
// 更换点位
 TInstanceHook(void, "?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@@Z",
               Dimension, BlockSource *blockSource, BlockPos* blockPos, int layer, Block* afterBlock, Block* beforeBlock, char updateFlags, ActorBlockSyncMessage *syncMsg) {
     IF_LISTENED(BlockChangedEvent) {
         int dimId = this->getDimensionId();
         BlockChangedEvent ev{};
         ev.mPreviousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *blockPos, dimId);
         ev.mNewBlockInstance = BlockInstance::createBlockInstance(afterBlock, *blockPos, dimId);
         if (!ev.call())
             return;
     }
     IF_LISTENED_END(BlockChangedEvent)
     return original(this, blockSource, blockPos, layer, afterBlock, beforeBlock, updateFlags, syncMsg);
 }

/////////////////// BlockExploded ///////////////////
// block::onExploded实际是调用以下其中之一
// StairBlock
TInstanceHook(void, "onExploded@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
           Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
     IF_LISTENED(BlockExplodedEvent) {
         if (actor) {
             BlockExplodedEvent ev{};
             ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, bs->getDimensionId());
             ev.mExplodeSource = actor;
             ev.call();
        }
    }
     IF_LISTENED_END(BlockExplodedEvent)
     return original(this, bs, bp, actor);
}
//TntBlock
TInstanceHook(void, "?onExploded@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
              Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
    IF_LISTENED(BlockExplodedEvent) {
        if (actor) {
            BlockExplodedEvent ev{};
            ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, bs->getDimensionId());
            ev.mExplodeSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(BlockExplodedEvent)
    return original(this, bs, bp, actor);
}
//TopSnowBlock
TInstanceHook(void, "?onExploded@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
              Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
    IF_LISTENED(BlockExplodedEvent) {
        if (actor) {
            BlockExplodedEvent ev{};
            ev.mBlockInstance = BlockInstance::createBlockInstance(this, *bp, bs->getDimensionId());
            ev.mExplodeSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(BlockExplodedEvent)
    return original(this, bs, bp, actor);
}


/////////////////// FireSpread ///////////////////
bool onFireSpread_OnPlace = false;

TClasslessInstanceHook(void, "?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z",
                       BlockSource* blockSource, BlockPos* blockPos) {
    onFireSpread_OnPlace = true;
    original(this, blockSource, blockPos);
    onFireSpread_OnPlace = false;
}

TClasslessInstanceHook(bool, "?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z",
                       BlockSource* blockSource, BlockPos* blockPos) {
    auto result = original(this, blockSource, blockPos);
    if (!onFireSpread_OnPlace || !result)
        return result;

    IF_LISTENED(FireSpreadEvent) {
        FireSpreadEvent ev{};
        ev.mTarget = *blockPos;
        ev.mDimensionId = blockSource->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(FireSpreadEvent)
    return result;
}


/////////////////// ContainerChange ///////////////////
 #include <llapi/mc/LevelContainerModel.hpp>

 TInstanceHook(void, "?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z",
               LevelContainerModel, int slotNumber, ItemStack* oldItem, ItemStack* newItem) {
     IF_LISTENED(ContainerChangeEvent) {
         Player* player = this->mPlayer; // IDA LevelContainerModel::LevelContainerModel

         if (player->canOpenContainerScreen()) {
             BlockPos blockPos = this->mBlockPos;

             ContainerChangeEvent ev{};
             ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
             ev.mContainer = ev.mBlockInstance.getContainer();
             ev.mPlayer = player;
             ev.mSlot = slotNumber + this->_getContainerOffset();
             ev.mPreviousItemStack = oldItem;
             ev.mNewItemStack = newItem;
             ev.mActor = Global<Level>->getEntity(this->mEntityUniqueId);
             ev.call();
         }
     }
     IF_LISTENED_END(ContainerChangeEvent)
     return original(this, slotNumber, oldItem, newItem);
 }


/////////////////// ProjectileHitBlock ///////////////////
// 没有这个符号
// TInstanceHook(void, "?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z",
//               Block, BlockSource* bs, BlockPos* bp, Actor* actor) {
//     // Exclude default position BlockPos::Zero
//     if ((bp->x | bp->y | bp->z) == 0) // actor->getPos().distanceTo(bp->center())>5)
//         return original(this, bs, bp, actor);
//     IF_LISTENED(ProjectileHitBlockEvent) {
//         if (this->getTypeName() != "minecraft:air") {
//             ProjectileHitBlockEvent ev{};
//             ev.mBlockInstance = Level::getBlockInstance(bp, bs);
//             ev.mSource = actor;
//             ev.call();
//         }
//     }
//     IF_LISTENED_END(ProjectileHitBlockEvent)
//     return original(this, bs, bp, actor);
// }


/////////////////// RedStoneUpdate ///////////////////
// 红石粉
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedStoneWireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, blockSource, blockPos, level, isActive);
}
// 红石火把
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, blockSource, blockPos, level, isActive);
}
// 红石中继器
TClasslessInstanceHook(void, "?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, blockSource, blockPos, level, isActive);
}
// 红石比较器
TClasslessInstanceHook(void, "?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {
    IF_LISTENED(RedStoneUpdateEvent) {
        RedStoneUpdateEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;

        level = ev.mRedStonePower;
    }
    IF_LISTENED_END(RedStoneUpdateEvent)
    return original(this, blockSource, blockPos, level, isActive);
}


/////////////////// HopperSearchItem ///////////////////
// 没有这个符号
 TClasslessInstanceHook(bool, "?_pullInItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
                        BlockSource* blockSource, void* container, Vec3* vec3) {
     bool isMinecart = dAccess<bool>(this, 5); // IDA Hopper::Hopper 正确

     IF_LISTENED(HopperSearchItemEvent) {
         HopperSearchItemEvent ev{};
         if (isMinecart) {
             ev.isMinecart = true;
             ev.mMinecartPos = *vec3;
         } else {
             ev.isMinecart = false;
             ev.mHopperBlock = Level::getBlockInstance(vec3->toBlockPos(), blockSource);
         }
         ev.mDimensionId = blockSource->getDimensionId();
         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(HopperSearchItemEvent)
     return original(this, blockSource, container, vec3);
 }

/////////////////// HopperPushOut ///////////////////
TClasslessInstanceHook(bool, "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
                       BlockSource* blockSource, void* container, Vec3* vec3, unsigned int attachedFace) {
    IF_LISTENED(HopperPushOutEvent) {
        HopperPushOutEvent ev{};
        ev.mPos = *vec3;
        ev.mDimensionId = blockSource->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(HopperPushOutEvent)
    return original(this, blockSource, container, vec3, attachedFace);
}

/////////////////// PistonTryPushEvent & PistonPushEvent ///////////////////
TInstanceHook(bool, "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
              PistonBlockActor, BlockSource* blockSource, BlockPos* blockPos, char curBranchFacing, char pistonMoveFacing) {
    IF_LISTENED(PistonTryPushEvent) {
        PistonTryPushEvent ev{};
        ev.mTargetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        if (ev.mTargetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
            return original(this, blockSource, blockPos, curBranchFacing, pistonMoveFacing);

        ev.mPistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PistonTryPushEvent)

    bool res = original(this, blockSource, blockPos, curBranchFacing, pistonMoveFacing);
    if (!res)
        return false;

    IF_LISTENED(PistonPushEvent) {
        PistonPushEvent ev{};
        ev.mTargetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        if (ev.mTargetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
            return true;

        ev.mPistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

        ev.call();
    }
    IF_LISTENED_END(PistonPushEvent)
    return true;
}


/////////////////// FarmLandDecay ///////////////////
TClasslessInstanceHook(void, "?transformOnFall@FarmBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z",
                       BlockSource* blockSource, BlockPos* blockPos, Actor* actor, float fallDistance) {
    IF_LISTENED(FarmLandDecayEvent) {
        FarmLandDecayEvent ev{};
        ev.mBlockInstance = Level::getBlockInstance(blockPos, blockSource);
        ev.mActor = actor;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(FarmLandDecayEvent)
    return original(this, blockSource, blockPos, actor, fallDistance);
}


/////////////////// PlayerUseFrameBlockEvent  ///////////////////
// 符号变更
 TClasslessInstanceHook(bool, "?use@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@@Z",
                        Player* player, BlockPos* blockPos) {
     IF_LISTENED(PlayerUseFrameBlockEvent) {
         PlayerUseFrameBlockEvent ev{};
         ev.mType = PlayerUseFrameBlockEvent::Type::Use;
         ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
         ev.mPlayer = player;
         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(PlayerUseFrameBlockEvent)
     return original(this, player, blockPos);
 }

TClasslessInstanceHook(bool, "?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
                       Player* player, BlockPos* blockPos) {
    IF_LISTENED(PlayerUseFrameBlockEvent) {
        PlayerUseFrameBlockEvent ev{};
        ev.mType = PlayerUseFrameBlockEvent::Type::Attack;
        ev.mBlockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());
        ev.mPlayer = player;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent)
    return original(this, player, blockPos);
}

/////////////////// LiquidSpreadEvent ///////////////////
#include <llapi/mc/LiquidBlockDynamic.hpp>
TInstanceHook(bool, "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z",
              LiquidBlockDynamic, class BlockSource& blockSource, class BlockPos const& to, class BlockPos const& from, unsigned char flowFromDirection) {
    auto result = original(this, blockSource, to, from, flowFromDirection);
    if (!result)
        return result;
    IF_LISTENED(LiquidSpreadEvent) {
        LiquidSpreadEvent ev{};
        ev.mBlockInstance = BlockInstance::createBlockInstance(
            const_cast<Block*>(&this->getRenderBlock()), from, blockSource.getDimensionId());
        ev.mTarget = to;
        ev.mDimensionId = blockSource.getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(LiquidSpreadEvent)

    return result;
}

// THook(void, "?_trySpreadTo@LiquidBlockDynamic@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H1E@Z",
//       LiquidBlockDynamic* _this, BlockSource* bs, BlockPos* to, unsigned int a4, BlockPos* from, char id)
//{
//     IF_LISTENED(LiquidSpreadEvent)
//     {
//         LiquidSpreadEvent ev{};
//         ev.mBlockInstance = BlockInstance::createBlockInstance(
//             const_cast<Block*>(&_this->getRenderBlock()), *from, bs->getDimensionId());
//         ev.mTarget = *to;
//         ev.mDimensionId = bs->getDimensionId();
//         logger.warn("LiquidSpreadEvent - {} - {} -> {}",
//                     ev.mBlockInstance.getBlock()->getTypeName(), from->toString(), to->toString());
//         if (!ev.call())
//             return;
//     }
//     IF_LISTENED_END(LiquidSpreadEvent)
//     return;
//     original(_this, bs, to, a4, from, id);
// }


/////////////////// PlayerDeath ///////////////////
TInstanceHook(void*, "?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer, ActorDamageSource* src) {
    IF_LISTENED(PlayerDieEvent) {
        if (this->isPlayer()) {
            PlayerDieEvent ev{};
            ev.mPlayer = this;
            ev.mDamageSource = src;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerDieEvent)
    isDieDrop = true;
    auto result = original(this, src);
    isDieDrop = false;
    return result;
}

#include <llapi/mc/SurvivalMode.hpp>
/////////////////// PlayerDestroy ///////////////////

// TInstanceHook(bool, "?destroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E@Z",
//               SurvivalMode, BlockPos a3, unsigned __int8 a4)
//{
//     IF_LISTENED(PlayerDestroyBlockEvent)
//     {
//         if (getPlayer()->isPlayer())
//         {
//             PlayerDestroyBlockEvent ev{};
//             ev.mPlayer = getPlayer();
//             auto bl = Level::getBlockInstance(a3, getPlayer()->getDimensionId());
//             ev.mBlockInstance = bl;
//             if (!ev.call())
//             {
//                 return false;
//             }
//         }
//     }
//     IF_LISTENED_END(PlayerDestroyBlockEvent)
//     return original(this, a3, a4);
// }

TInstanceHook(bool, "?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z",
              GameMode, BlockPos blockPos, char face) {
    IF_LISTENED(PlayerDestroyBlockEvent) {
        if (getPlayer()->isPlayer()) {
            PlayerDestroyBlockEvent ev{};
            ev.mPlayer = getPlayer();
            auto bl = Level::getBlockInstance(blockPos, getPlayer()->getDimensionId());
            ev.mBlockInstance = bl;
            if (!ev.call()) {
                return false;
            }
        }
    }
    IF_LISTENED_END(PlayerDestroyBlockEvent)
    return original(this, blockPos, face);
}


/////////////////// PlayerUseItemOn ///////////////////
TInstanceHook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z", GameMode,
              ItemStack* itemStack, BlockPos *blockPos, unsigned char side, Vec3* clickPos, Block* targetBlock) {
    IF_LISTENED(PlayerUseItemOnEvent) {
        PlayerUseItemOnEvent ev{};
        ev.mPlayer = this->getPlayer();
        ev.mBlockInstance = Level::getBlockInstance(blockPos, ev.mPlayer->getDimensionId());
        ev.mItemStack = itemStack;
        ev.mFace = side;
        ev.mClickPos = *clickPos;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemOnEvent)
    return original(this, itemStack, blockPos, side, clickPos, targetBlock);
}


/////////////////// MobHurt ///////////////////
 TInstanceHook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
               Mob, ActorDamageSource& src, int damage, bool knock, bool ignite) {
     IF_LISTENED(MobHurtEvent) {
         if (this) {
             MobHurtEvent ev{};
             ev.mMob = this;
             ev.mDamageSource = &src;
             ev.mDamage = damage;
             if (!ev.call())
                 return false;

             damage = ev.mDamage;
         }
     }
     IF_LISTENED_END(MobHurtEvent)
     return original(this, src, damage, knock, ignite);
 }
// 没有这个符号
// TInstanceHook(float, "?getDamageAfterResistanceEffect@Mob@@UEBAMAEBVActorDamageSource@@M@Z", Mob, ActorDamageSource* src, float damage) {
//     if (src->getCause() == ActorDamageCause::ActorDamageCause_Magic) {
//         IF_LISTENED(MobHurtEvent) {
//             if (this) {
//                 MobHurtEvent ev{};
//                 ev.mMob = this;
//                 ev.mDamageSource = src;
//                 ev.mDamage = damage;
//                 if (!ev.call())
//                     return 0;
//                 damage = ev.mDamage;
//             }
//         }
//         IF_LISTENED_END(MobHurtEvent)
//     }
//     return original(this, src, damage);
// }

//////////////// PlayerUseItem & PlayerEat ////////////////
// #include <llapi/mc/ComponentItem.hpp>
 TInstanceHook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode, ItemStack& itemStack) {
     auto player = this->getPlayer();
     IF_LISTENED(PlayerUseItemEvent) {
         PlayerUseItemEvent ev{};
         ev.mPlayer = player;
         ev.mItemStack = &itemStack;
         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(PlayerUseItemEvent)
//     IF_LISTENED(PlayerEatEvent) {
//         if (it.getItem()->isFood() && (pl->isHungry() || pl->forceAllowEating())) {
//             PlayerEatEvent ev{};
//             ev.mPlayer = pl;
//             ev.mFoodItem = &it;
//             if (!ev.call()) {
//                 pl->refreshAttribute(Player::HUNGER);
//                 return false;
//             }
//         }
//     }
//     IF_LISTENED_END(PlayerEatEvent)
     return original(this, itemStack);
 }

#include <llapi/mc/BucketItem.hpp>
TInstanceHook(ItemStack*, "?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z", BucketItem, ItemStack* itemStack, Player* player) {
     if (this->getFullItemName() == "minecraft:milk_bucket") {
         IF_LISTENED(PlayerEatEvent) {
             PlayerEatEvent ev{};
             ev.mPlayer = player;
             ev.mFoodItem = itemStack;
             if (!ev.call()) {
                 return itemStack;
             }
         }
         IF_LISTENED_END(PlayerEatEvent)
     }
     return original(this, itemStack, player);
 }


#include <llapi/mc/PotionItem.hpp>
TInstanceHook(ItemStack*, "?use@PotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z", PotionItem, ItemStack* itemStack, Player* player) {
     IF_LISTENED(PlayerEatEvent) {
         PlayerEatEvent ev{};
         ev.mPlayer = player;
         ev.mFoodItem = itemStack;
         if (!ev.call()) {
             return itemStack;
         }
     }
     IF_LISTENED_END(PlayerEatEvent)
     return original(this, itemStack, player);
 }

/////////////////// MobDie ///////////////////
TInstanceHook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob, ActorDamageSource* ads) {
    IF_LISTENED(MobDieEvent) {
        if (this) {
            MobDieEvent ev{};
            ev.mMob = this;
            ev.mDamageSource = ads;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(MobDieEvent)
    return original(this, ads);
}
#include <llapi/mc/Explosion.hpp>
///////////////////  Entity & Block Explosion ///////////////////
TInstanceHook(void, "?explode@Explosion@@QEAAXXZ",Explosion) {
    try {
//        auto acId = *(ActorUniqueID*)((QWORD*)this + 11);
//        auto actor = Global<Level>->getEntity(acId);
//        auto vec3 = *(Vec3*)(QWORD*)this;
//        auto radius = *((float*)this + 3);
//        auto blockSource = (BlockSource*)*((QWORD*)this + 12);
//        auto maxResistance = *((float*)this + 26);
//        auto genFire = (bool)*((BYTE*)this + 80);
//        auto canBreaking = (bool)*((BYTE*)this + 81);

        IF_LISTENED(EntityExplodeEvent) {
            if (this->mSource) {
                EntityExplodeEvent ev{};
                ev.mActor = this->mSource;
                ev.mBreaking = this->mBreaking;
                ev.mFire = this->mFire;
                ev.mMaxResistance = this->mMaxResistance;
                ev.mPos = this->mPos;
                ev.mRadius = this->mRadius;
                ev.mDimension = this->mRegion;
                if (!ev.call())
                    return;

                this->mRadius = ev.mRadius;
                this->mMaxResistance = ev.mMaxResistance;
                this->mFire = ev.mFire;
                this->mBreaking = ev.mBreaking;
            }
        }
        IF_LISTENED_END(EntityExplodeEvent)

        IF_LISTENED(BlockExplodeEvent) {
            if (!this->mSource) {
                BlockPos blockPos = this->mPos.toBlockPos();
                BlockExplodeEvent ev{};
                ev.mBlockInstance = Level::getBlockInstance(blockPos, this->mRegion);
                ev.mBreaking = this->mBreaking;
                ev.mFire = this->mFire;
                ev.mMaxResistance = this->mMaxResistance;
                ev.mRadius = this->mRadius;
                if (!ev.call())
                    return;

                this->mRadius = ev.mRadius;
                this->mMaxResistance = ev.mMaxResistance;
                this->mFire = ev.mFire;
                this->mBreaking = ev.mBreaking;
            }
        }
        IF_LISTENED_END(BlockExplodeEvent)
    } catch (...) {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: Entity or Block Explosion");
    }
    original(this);
}


////////////// ProjectileHitEntity //////////////
// TClasslessInstanceHook(void, "?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z",
//                        Actor* item, HitResult* res) {
//     IF_LISTENED(ProjectileHitEntityEvent) {
//         Actor* to = res->getEntity();
//         if (to) {
//             ProjectileHitEntityEvent ev{};
//             ev.mTarget = to;
//             ev.mSource = item;
//             ev.call();
//         }
//     }
//     IF_LISTENED_END(ProjectileHitEntityEvent)
//     return original(this, item, res);
// }


////////////// WitherBossDestroy //////////////
// 没有这个符号
// 在1.16.40里destroyBlocks不是WitherBoss类的成员
// 只能从调用destroyBlocks的WitherBoss::newServerAiStep获取实体指针
namespace{
    WitherBoss* mWitherBoss;
}
TClasslessInstanceHook(void,"?newServerAiStep@WitherBoss@@UEAAXXZ"){
    IF_LISTENED(WitherBossDestroyEvent) {
        mWitherBoss = (WitherBoss*)this;
    }
    IF_LISTENED_END(WitherBossDestroyEvent)
    return original(this);
}

THook(void, "?destroyBlocks@@YAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@H@Z",
      Level* level, AABB* aabb, BlockSource* blockSource, int range) {
    IF_LISTENED(WitherBossDestroyEvent) {
        WitherBossDestroyEvent ev{};
//         ev.mWitherBoss = dAccess<WitherBoss*>(level,-816); // WitherBoss::newServerAiStep Line515
        ev.mWitherBoss = mWitherBoss;
        ev.mDestroyRange = *aabb;
        if (!ev.call())
            return;

        *aabb = ev.mDestroyRange;
    }
    IF_LISTENED_END(WitherBossDestroyEvent)
    original(level, aabb, blockSource, range);
}


////////////// EntityRide //////////////
// 没有这个符号
 TInstanceHook(bool, "?canAddRider@Actor@@UEBA_NAEAV1@@Z",
               Actor, Actor* actor) {
     auto result = original(this, actor);
     if (!result)
         return false;
     IF_LISTENED(EntityRideEvent) {
         EntityRideEvent ev{};
         ev.mRider = actor;
         ev.mVehicle = this;
         if (!ev.call())
             return false;
     }
     IF_LISTENED_END(EntityRideEvent)
     return result;
 }


////////////// EntityStepOnPressurePlate //////////////
// 没有这个符号
// TClasslessInstanceHook(bool, "?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z",
//                        BlockSource* a2, BlockPos* a3, Actor* a4) {
//     IF_LISTENED(EntityStepOnPressurePlateEvent) {
//         EntityStepOnPressurePlateEvent ev{};
//         ev.mActor = a4;
//         ev.mBlockInstance = Level::getBlockInstance(a3, a4->getDimensionId());
//         if (!ev.call())
//             return false;
//     }
//     IF_LISTENED_END(EntityStepOnPressurePlateEvent)
//     return original(this, a2, a3, a4);
// }

////////////// ProjectileSpawn //////////////
// TClasslessInstanceHook(Actor*,
//                        "?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z",
//                        BlockSource* a2, ActorDefinitionIdentifier* a3, Actor* a4, Vec3* a5, Vec3* a6) {
//     string name = a3->getCanonicalName();
//     if (name != "minecraft:thrown_trident") {
//         IF_LISTENED(ProjectileSpawnEvent) {
//             ProjectileSpawnEvent ev{};
//             ev.mShooter = a4;
//             ev.mIdentifier = a3;
//             ev.mType = name;

//             if (!ev.call())
//                 return nullptr;
//         }
//         IF_LISTENED_END(ProjectileSpawnEvent)
//     }
//     auto projectile = original(this, a2, a3, a4, a5, a6);
//     IF_LISTENED(ProjectileCreatedEvent) {
//         ProjectileCreatedEvent ev{};
//         ev.mShooter = a4;
//         ev.mProjectile = projectile;
//         ev.call();
//     }
//     IF_LISTENED_END(ProjectileCreatedEvent)
//     return projectile;
// }

// #include <llapi/mc/CrossbowItem.hpp>
#include <llapi/mc/ActorDefinitionIdentifier.hpp>
// static_assert(sizeof(ActorDefinitionIdentifier) == 176);
// TInstanceHook(void, "?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z",
//               CrossbowItem, void* a1, Player* a2) {
//     IF_LISTENED(ProjectileSpawnEvent) {
//         ActorDefinitionIdentifier identifier("minecraft:fireworks_rocket");
//         ProjectileSpawnEvent ev{};
//         ev.mShooter = a2;
//         ev.mIdentifier = &identifier;
//         ev.mType = this->getFullItemName();

//         if (!ev.call())
//             return;
//     }
//     IF_LISTENED_END(ProjectileSpawnEvent)
//     original(this, a1, a2);
// }

// TClasslessInstanceHook(void, "?releaseUsing@TridentItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z",
//                        ItemStack* a2, Player* a3, int a4) {
//     IF_LISTENED(ProjectileSpawnEvent) {
//         ActorDefinitionIdentifier identifier("minecraft:thrown_trident");
//         ProjectileSpawnEvent ev{};
//         ev.mShooter = a3;
//         ev.mIdentifier = &identifier;
//         ev.mType = a2->getTypeName();

//         if (!ev.call())
//             return;
//     }
//     IF_LISTENED_END(ProjectileSpawnEvent)
//     return original(this, a2, a3, a4);
// }

// #include <llapi/mc/WeakEntityRef.hpp>
// #include <llapi/mc/EntityContext.hpp>

////////////// NpcCmd //////////////
// TInstanceHook(void,
//               "?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
//               NpcComponent, Actor* ac, Player* pl, int a4, string& a5) {
//     IF_LISTENED(NpcCmdEvent) {
//         // IDA NpcComponent::executeCommandAction
//         // NpcSceneDialogueData data(*this, *ac, a5);

//         auto ec = (EntityContext*)((char*)ac + 8);
//         NpcSceneDialogueData data(WeakEntityRef(ec->getWeakRef()), a5);

//         auto container = data.getActionsContainer();
//         auto actionAt = container->getActionAt(a4);
//         if (actionAt && dAccess<char>(actionAt, 8) == (char)1) {

//             NpcCmdEvent ev{};
//             ev.mPlayer = pl;
//             ev.mNpc = ac;
//             ev.mCommand = actionAt->getText();
//             if (!ev.call())
//                 return;
//         }
//     }
//     IF_LISTENED_END(NpcCmdEvent)
//     return original(this, ac, pl, a4, a5);
// }

////////////// ArmorStandChange //////////////
TInstanceHook(bool, "?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z",
              ArmorStand, Player* player, int slot) {
    IF_LISTENED(ArmorStandChangeEvent) {
        ArmorStandChangeEvent ev{};
        ev.mArmorStand = this;
        ev.mPlayer = player;
        ev.mSlot = slot;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(ArmorStandChangeEvent)
    return original(this, player, slot);
}

////////////////// EntityTransform //////////////////
TClasslessInstanceHook(void, "?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z",
                       Actor* beforeEntity, Actor* afterEntity, void* transformation, ActorUniqueID* uniqueId, Level* level) {
    IF_LISTENED(EntityTransformEvent) {
        EntityTransformEvent ev{};
        ActorUniqueID actorUniqueID = beforeEntity->getActorUniqueId();
        ev.mBeforeEntityUniqueId = &actorUniqueID;
        ev.mAfterEntity = afterEntity;
        ev.call();
    }
    IF_LISTENED_END(EntityTransformEvent)
    original(this, beforeEntity, afterEntity, transformation, uniqueId, level);
}

////////////// PlayerScoreChangedEvent  //////////////
TClasslessInstanceHook(void, "?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z",
                       ScoreboardId* scoreboardId, Objective* objective) {
    IF_LISTENED(PlayerScoreChangedEvent) {
        __int64 id = scoreboardId->id;

        Player* player = nullptr;
        auto players = Level::getAllPlayers();
        for (auto& player : players) {
            if (Global<Scoreboard>->getScoreboardId(*player).id == id) {
                player = player;
                break;
            }
        }

        if (player) {
            PlayerScoreChangedEvent ev{};
            ev.mPlayer = player;
            ev.mScore = objective->getPlayerScore(*scoreboardId).getCount();
            ev.mScoreboardId = scoreboardId;
            ev.mObjective = objective;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerScoreChangedEvent)

    return original(this, scoreboardId, objective);
}


#include <llapi/mc/Minecraft.hpp>
////////////// ServerStarted //////////////
// 没有这个符号
 TClasslessInstanceHook(void, "?onServerThreadStarted@MinecraftServerScriptEngine@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z",
                        class ServerInstance& ins) {
     if(!ll::isDebugMode())
         _set_se_translator(seh_exception::TranslateSEHtoCE);

     ll::globalConfig.tickThreadId = std::this_thread::get_id();
     Global<Level> = Global<Minecraft>->getLevel();
     Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
     // Global<ServerNetworkHandler> = Global<Minecraft>->getServerNetworkHandler();
     ll::globalConfig.serverStatus = ll::LLServerStatus::Running;

     IF_LISTENED(ServerStartedEvent) {
         ServerStartedEvent ev{};
         ev.call();
     }
     IF_LISTENED_END(ServerStartedEvent)

     original(this, ins);
 }

////////////// ServerStopped //////////////
TClasslessInstanceHook(void, "??1DedicatedServer@@UEAA@XZ") {
    ll::globalConfig.serverStatus = ll::LLServerStatus::Stopping;

    IF_LISTENED(ServerStoppedEvent) {
        ServerStoppedEvent ev{};
        ev.call();
    }
    IF_LISTENED_END(ServerStoppedEvent)
    original(this);
}
TClasslessInstanceHook(void, "?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z",
                       class CommandOrigin const& origin, class CommandOutput& output) {
    ll::globalConfig.serverStatus = ll::LLServerStatus::Stopping;
    original(this, origin, output);
}


////////////// RegCmd //////////////
 TInstanceHook(void, "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
               CommandRegistry) {
     Global<CommandRegistry> = this;
     original(this);
     IF_LISTENED(RegCmdEvent) {
         RegCmdEvent ev{};
         ev.mCommandRegistry = this;
         ev.call();
         // setup dynamic command
         DynamicCommand::onServerCommandsRegister(*this);
     }
     IF_LISTENED_END(RegCmdEvent)
 }

////////////// ConsoleOutput //////////////
THook(std::ostream&,
      "??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z",
      std::ostream& _this, const char* str, unsigned size) {
    IF_LISTENED(ConsoleOutputEvent) {
        if (&_this == &std::cout) {
            ConsoleOutputEvent ev{};
            ev.mOutput = string(str, size);
            if (!ev.call())
                return _this;
        }
    }
    IF_LISTENED_END(ConsoleOutputEvent)
    return original(_this, str, size);
}

////////////// PlayerDropItem //////////////
TInstanceHook(void*, "?handle@ComplexInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
              ComplexInventoryTransaction, Player* player, bool isSenderAuthority) {
    if (this->type == ComplexInventoryTransaction::Type::NORMAL) {
        IF_LISTENED(PlayerDropItemEvent) {
            auto& InvTran = this->data;
            auto& action = InvTran.getActions(InventorySource(InventorySourceType::Container, ContainerID::Inventory));
            if (action.size() == 1) {
                PlayerDropItemEvent ev{};
                auto& item = player->getInventory().getItem(action[0].slot);
                ev.mItemStack = const_cast<ItemStack*>(&item);
                ev.mPlayer = player;
                if (!ev.call()) {
                    player->sendInventory(1);
                    return nullptr;
                }
                isQDrop = true;
                auto result = original(this, player, isSenderAuthority);
                isQDrop = false;
                return result;
            }
        }
        IF_LISTENED_END(PlayerDropItemEvent)
    }
    return original(this, player, isSenderAuthority);
}

// 更换符号，逻辑大概一致，未清楚玩家丢物品是否调用
#include <llapi/mc/FillingContainer.hpp>
 TInstanceHook(void, "?dropSlot@FillingContainer@@QEAAXH_N00@Z",
               FillingContainer, signed int slot, char unk) {
     auto player = dAccess<Player*, ll::offset::EVENTAPI_PlayerDropItem>(this);
     if (player->isPlayer()) {
         IF_LISTENED(PlayerDropItemEvent) {
             PlayerDropItemEvent ev{};
             if (slot >= 0) {
                 auto& item = this->getItem(slot);
                 if (!item.isNull()) {
                     ev.mItemStack = const_cast<ItemStack*>(&item);
                     ev.mPlayer = player;
                 }
                 if (!ev.call()) {
                     return;
                 }
             }
         }
         IF_LISTENED_END(PlayerDropItemEvent)
     }
     return original(this, slot, unk);
 }

////////////// PlayerBedEnter //////////////
TInstanceHook(int, "?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z",
              Player, BlockPos const& blk) {
    auto bl = Level::getBlockInstance(blk, getDimensionId());
    IF_LISTENED(PlayerBedEnterEvent) {
        PlayerBedEnterEvent ev{};
        ev.mPlayer = this;
        ev.mBlockInstance = &bl;
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(PlayerBedEnterEvent)
    return original(this, blk);
}

#include <llapi/mc/Spawner.hpp>

////////////// MobSpawn //////////////
 TInstanceHook(Mob*, "?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z",
               Spawner, BlockSource* blockSource, ActorDefinitionIdentifier* identifier, Actor* actor, Vec3& vec3, bool naturalSpawn, bool surface, bool fromSpawner) {
     IF_LISTENED(MobSpawnEvent) {
         MobSpawnEvent ev{};
         ev.mTypeName = identifier->getCanonicalName();
         ev.mPos = vec3;
         ev.mDimensionId = blockSource->getDimensionId();
         if (!ev.call())
             return nullptr;
     }
     IF_LISTENED_END(MobSpawnEvent)
     return original(this, blockSource, identifier, actor, vec3, naturalSpawn, surface, fromSpawner);
 }

#include <llapi/impl/FormPacketHelper.h>
#include <llapi/mc/Json.hpp>
#include <llapi/mc/ModalFormResponsePacket.hpp>
////////////// FormResponsePacket //////////////

TClasslessInstanceHook(void, "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
                       NetworkIdentifier* id, ServerNetworkHandler* handler, std::shared_ptr<Packet> pPacket) {
    Packet* packet = pPacket.get();
    ModalFormResponsePacket* mPacket = (ModalFormResponsePacket*)packet;
    ServerPlayer* serverPlayer = handler->getServerPlayer(*id, 0);
    if (serverPlayer) {
        string data;
        auto formId = mPacket->mFormId;
        if(!mPacket->mJSONResponse.empty())
            data = mPacket->mJSONResponse;
		else
            data = "null";
		
        if (data.back() == '\n')
            data.pop_back();

        IF_LISTENED(FormResponsePacketEvent) {
            FormResponsePacketEvent ev{};
            ev.mServerPlayer = serverPlayer;
            ev.mFormId = formId;
            ev.mJsonData = data;

            if (!ev.call())
                return;
        }
        IF_LISTENED_END(FormResponsePacketEvent)
        HandleFormPacket(serverPlayer, formId, data);
    }
    original(this, id, handler, pPacket);
}

THook(void, "?_initialize@ResourcePackRepository@@AEAAXXZ",
      ResourcePackRepository* self) {
    Global<ResourcePackRepository> = self;
    IF_LISTENED(ResourcePackInitEvent) {
        ResourcePackInitEvent ev{};
        ev.mRepo = self;
        ev.call();
    }
    IF_LISTENED_END(ResourcePackInitEvent)
    original(self);
}