﻿#include <llapi/mc/Packet.hpp>
#include <llapi/mc/MinecraftPackets.hpp>
#include <llapi/LoggerAPI.h>

#define INCLUDE_ALL_PACKET
#define SIZE_STATIC_ASSERT_IF_DEFINE
//#define SIZE_STATIC_ASSERT
//#define GENERATE_PACKET
//#define FILL_PACKET

extern Logger logger;

#ifdef INCLUDE_ALL_PACKET

#include <llapi/mc/LoginPacket.hpp>
#include <llapi/mc/PlayStatusPacket.hpp>
#include <llapi/mc/ServerToClientHandshakePacket.hpp>
#include <llapi/mc/ClientToServerHandshakePacket.hpp>
#include <llapi/mc/DisconnectPacket.hpp>
#include <llapi/mc/ResourcePacksInfoPacket.hpp>
#include <llapi/mc/ResourcePackStackPacket.hpp>
#include <llapi/mc/ResourcePackClientResponsePacket.hpp>
#include <llapi/mc/TextPacket.hpp>
#include <llapi/mc/SetTimePacket.hpp>
#include <llapi/mc/StartGamePacket.hpp>
#include <llapi/mc/AddPlayerPacket.hpp>
#include <llapi/mc/AddActorPacket.hpp>
#include <llapi/mc/RemoveActorPacket.hpp>
#include <llapi/mc/AddItemActorPacket.hpp>
#include <llapi/mc/TakeItemActorPacket.hpp>
#include <llapi/mc/MoveActorAbsolutePacket.hpp>
#include <llapi/mc/MovePlayerPacket.hpp>
#include <llapi/mc/UpdateBlockPacket.hpp>
#include <llapi/mc/AddPaintingPacket.hpp>
#include <llapi/mc/TickSyncPacket.hpp>
#include <llapi/mc/LevelSoundEventPacketV1.hpp>
#include <llapi/mc/LevelEventPacket.hpp>
#include <llapi/mc/BlockEventPacket.hpp>
#include <llapi/mc/ActorEventPacket.hpp>
#include <llapi/mc/MobEffectPacket.hpp>
#include <llapi/mc/UpdateAttributesPacket.hpp>
#include <llapi/mc/InventoryTransactionPacket.hpp>
#include <llapi/mc/MobEquipmentPacket.hpp>
#include <llapi/mc/MobArmorEquipmentPacket.hpp>
#include <llapi/mc/InteractPacket.hpp>
#include <llapi/mc/BlockPickRequestPacket.hpp>
#include <llapi/mc/ActorPickRequestPacket.hpp>
#include <llapi/mc/PlayerActionPacket.hpp>
#include <llapi/mc/HurtArmorPacket.hpp>
#include <llapi/mc/SetActorDataPacket.hpp>
#include <llapi/mc/SetActorMotionPacket.hpp>
#include <llapi/mc/SetActorLinkPacket.hpp>
#include <llapi/mc/SetHealthPacket.hpp>
#include <llapi/mc/SetSpawnPositionPacket.hpp>
#include <llapi/mc/AnimatePacket.hpp>
#include <llapi/mc/RespawnPacket.hpp>
#include <llapi/mc/ContainerOpenPacket.hpp>
#include <llapi/mc/ContainerClosePacket.hpp>
#include <llapi/mc/PlayerHotbarPacket.hpp>
#include <llapi/mc/InventoryContentPacket.hpp>
#include <llapi/mc/InventorySlotPacket.hpp>
#include <llapi/mc/ContainerSetDataPacket.hpp>
#include <llapi/mc/CraftingDataPacket.hpp>
#include <llapi/mc/CraftingEventPacket.hpp>
#include <llapi/mc/GuiDataPickItemPacket.hpp>
#include <llapi/mc/AdventureSettingsPacket.hpp>
#include <llapi/mc/BlockActorDataPacket.hpp>
#include <llapi/mc/PlayerInputPacket.hpp>
#include <llapi/mc/LevelChunkPacket.hpp>
#include <llapi/mc/SetCommandsEnabledPacket.hpp>
#include <llapi/mc/SetDifficultyPacket.hpp>
#include <llapi/mc/ChangeDimensionPacket.hpp>
#include <llapi/mc/SetPlayerGameTypePacket.hpp>
#include <llapi/mc/PlayerListPacket.hpp>
#include <llapi/mc/SimpleEventPacket.hpp>
#include <llapi/mc/EventPacket.hpp>
#include <llapi/mc/SpawnExperienceOrbPacket.hpp>
#include <llapi/mc/ClientboundMapItemDataPacket.hpp>
#include <llapi/mc/MapInfoRequestPacket.hpp>
#include <llapi/mc/RequestChunkRadiusPacket.hpp>
#include <llapi/mc/ChunkRadiusUpdatedPacket.hpp>
#include <llapi/mc/ItemFrameDropItemPacket.hpp>
#include <llapi/mc/GameRulesChangedPacket.hpp>
#include <llapi/mc/CameraPacket.hpp>
#include <llapi/mc/BossEventPacket.hpp>
#include <llapi/mc/ShowCreditsPacket.hpp>
#include <llapi/mc/AvailableCommandsPacket.hpp>
#include <llapi/mc/CommandRequestPacket.hpp>
#include <llapi/mc/CommandBlockUpdatePacket.hpp>
#include <llapi/mc/CommandOutputPacket.hpp>
#include <llapi/mc/UpdateTradePacket.hpp>
#include <llapi/mc/UpdateEquipPacket.hpp>
#include <llapi/mc/ResourcePackDataInfoPacket.hpp>
#include <llapi/mc/ResourcePackChunkDataPacket.hpp>
#include <llapi/mc/ResourcePackChunkRequestPacket.hpp>
#include <llapi/mc/TransferPacket.hpp>
#include <llapi/mc/PlaySoundPacket.hpp>
#include <llapi/mc/StopSoundPacket.hpp>
#include <llapi/mc/SetTitlePacket.hpp>
#include <llapi/mc/AddBehaviorTreePacket.hpp>
#include <llapi/mc/StructureBlockUpdatePacket.hpp>
#include <llapi/mc/ShowStoreOfferPacket.hpp>
#include <llapi/mc/PurchaseReceiptPacket.hpp>
#include <llapi/mc/PlayerSkinPacket.hpp>
#include <llapi/mc/SubClientLoginPacket.hpp>
#include <llapi/mc/AutomationClientConnectPacket.hpp>
#include <llapi/mc/SetLastHurtByPacket.hpp>
#include <llapi/mc/BookEditPacket.hpp>
#include <llapi/mc/NpcRequestPacket.hpp>
#include <llapi/mc/PhotoTransferPacket.hpp>
#include <llapi/mc/ModalFormRequestPacket.hpp>
#include <llapi/mc/ModalFormResponsePacket.hpp>
#include <llapi/mc/ServerSettingsRequestPacket.hpp>
#include <llapi/mc/ServerSettingsResponsePacket.hpp>
#include <llapi/mc/ShowProfilePacket.hpp>
#include <llapi/mc/SetDefaultGameTypePacket.hpp>
#include <llapi/mc/RemoveObjectivePacket.hpp>
#include <llapi/mc/SetDisplayObjectivePacket.hpp>
#include <llapi/mc/SetScorePacket.hpp>
#include <llapi/mc/LabTablePacket.hpp>
#include <llapi/mc/UpdateBlockSyncedPacket.hpp>
#include <llapi/mc/MoveActorDeltaPacket.hpp>
#include <llapi/mc/SetScoreboardIdentityPacket.hpp>
#include <llapi/mc/SetLocalPlayerAsInitializedPacket.hpp>
#include <llapi/mc/UpdateSoftEnumPacket.hpp>
#include <llapi/mc/NetworkStackLatencyPacket.hpp>
#include <llapi/mc/ScriptCustomEventPacket.hpp>
#include <llapi/mc/SpawnParticleEffectPacket.hpp>
#include <llapi/mc/AvailableActorIdentifiersPacket.hpp>
#include <llapi/mc/LevelSoundEventPacketV2.hpp>
#include <llapi/mc/NetworkChunkPublisherUpdatePacket.hpp>
#include <llapi/mc/BiomeDefinitionListPacket.hpp>
#include <llapi/mc/LevelSoundEventPacket.hpp>
#include <llapi/mc/LevelEventGenericPacket.hpp>
#include <llapi/mc/LecternUpdatePacket.hpp>
#include <llapi/mc/AddEntityPacket.hpp>
#include <llapi/mc/RemoveEntityPacket.hpp>
#include <llapi/mc/ClientCacheStatusPacket.hpp>
#include <llapi/mc/OnScreenTextureAnimationPacket.hpp>
#include <llapi/mc/MapCreateLockedCopyPacket.hpp>
#include <llapi/mc/StructureTemplateDataRequestPacket.hpp>
#include <llapi/mc/StructureTemplateDataResponsePacket.hpp>
#include <llapi/mc/ClientCacheBlobStatusPacket.hpp>
#include <llapi/mc/ClientCacheMissResponsePacket.hpp>
#include <llapi/mc/EducationSettingsPacket.hpp>
#include <llapi/mc/EmotePacket.hpp>
#include <llapi/mc/MultiplayerSettingsPacket.hpp>
#include <llapi/mc/SettingsCommandPacket.hpp>
#include <llapi/mc/AnvilDamagePacket.hpp>
#include <llapi/mc/CompletedUsingItemPacket.hpp>
#include <llapi/mc/NetworkSettingsPacket.hpp>
#include <llapi/mc/PlayerAuthInputPacket.hpp>
#include <llapi/mc/CreativeContentPacket.hpp>
#include <llapi/mc/PlayerEnchantOptionsPacket.hpp>
#include <llapi/mc/ItemStackRequestPacket.hpp>
#include <llapi/mc/ItemStackResponsePacket.hpp>
#include <llapi/mc/PlayerArmorDamagePacket.hpp>
#include <llapi/mc/CodeBuilderPacket.hpp>
#include <llapi/mc/UpdatePlayerGameTypePacket.hpp>
#include <llapi/mc/EmoteListPacket.hpp>
#include <llapi/mc/PositionTrackingDBServerBroadcastPacket.hpp>
#include <llapi/mc/PositionTrackingDBClientRequestPacket.hpp>
#include <llapi/mc/DebugInfoPacket.hpp>
#include <llapi/mc/PacketViolationWarningPacket.hpp>
// #include <llapi/mc/MotionPredictionHintsPacket.hpp>
// #include <llapi/mc/AnimateEntityPacket.hpp>
// #include <llapi/mc/CameraShakePacket.hpp>
// #include <llapi/mc/PlayerFogPacket.hpp>
// #include <llapi/mc/CorrectPlayerMovePredictionPacket.hpp>
// #include <llapi/mc/ItemComponentPacket.hpp>
// #include <llapi/mc/FilterTextPacket.hpp>
// #include <llapi/mc/ClientboundDebugRendererPacket.hpp>
// #include <llapi/mc/SyncActorPropertyPacket.hpp>
// #include <llapi/mc/AddVolumeEntityPacket.hpp>
// #include <llapi/mc/RemoveVolumeEntityPacket.hpp>
// #include <llapi/mc/SimulationTypePacket.hpp>
// #include <llapi/mc/NpcDialoguePacket.hpp>
// #include <llapi/mc/EduUriResourcePacket.hpp>
// #include <llapi/mc/CreatePhotoPacket.hpp>
// #include <llapi/mc/UpdateSubChunkBlocksPacket.hpp>
// #include <llapi/mc/SubChunkPacket.hpp>
// #include <llapi/mc/SubChunkRequestPacket.hpp>
// #include <llapi/mc/PlayerStartItemCooldownPacket.hpp>
// #include <llapi/mc/ScriptMessagePacket.hpp>
// #include <llapi/mc/CodeBuilderSourcePacket.hpp>
// #include <llapi/mc/TickingAreasLoadStatusPacket.hpp>
// #include <llapi/mc/DimensionDataPacket.hpp>
// #include <llapi/mc/AgentActionEventPacket.hpp>
// #include <llapi/mc/ChangeMobPropertyPacket.hpp>
// #include <llapi/mc/LessonProgressPacket.hpp>
// #include <llapi/mc/RequestAbilityPacket.hpp>
// #include <llapi/mc/RequestPermissionsPacket.hpp>
// #include <llapi/mc/ToastRequestPacket.hpp>
// #include <llapi/mc/UpdateAbilitiesPacket.hpp>
// #include <llapi/mc/UpdateAdventureSettingsPacket.hpp>
// #include <llapi/mc/DeathInfoPacket.hpp>
// #include <llapi/mc/EditorNetworkPacket.hpp>
// #include <llapi/mc/FeatureRegistryPacket.hpp>
// #include <llapi/mc/PassengerJumpPacket.hpp>

#endif INCLUDE_ALL_PACKET

#pragma region ForEachPacketMacro


#define ForEachPacket(Func)                        \
    Func(ShowProfilePacket);                       \
    Func(SetDefaultGameTypePacket);                \
    Func(RemoveObjectivePacket);                   \
    Func(CodeBuilderPacket);                       \
    Func(NetworkSettingsPacket);                   \
    Func(MultiplayerSettingsPacket);               \
    Func(SettingsCommandPacket);                   \
    Func(MapCreateLockedCopyPacket);               \
    Func(AddEntityPacket);                         \
    Func(RemoveEntityPacket);                      \
    Func(LevelSoundEventPacketV2);                 \
    Func(ModalFormRequestPacket);                  \
    Func(ModalFormResponsePacket);                 \
    Func(ServerSettingsRequestPacket);             \
    Func(ClientToServerHandshakePacket);           \
    Func(ServerToClientHandshakePacket);           \
    Func(SetTimePacket);                           \
    Func(RemoveActorPacket);                       \
    Func(LevelSoundEventPacketV1);                 \
    Func(SetCommandsEnabledPacket);                \
    Func(SetPlayerGameTypePacket);                 \
    Func(RequestChunkRadiusPacket);                \
    Func(ChunkRadiusUpdatedPacket);                \
    Func(SetLastHurtByPacket);                     \
    Func(AutomationClientConnectPacket);           \
    Func(StopSoundPacket);                         \
    Func(PlayerArmorDamagePacket);                 \
    Func(ActorPickRequestPacket);                  \
    Func(AddPaintingPacket);                       \
    Func(StructureTemplateDataResponsePacket);     \
    Func(TransferPacket);                          \
    Func(UpdateEquipPacket);                       \
    Func(UpdateSoftEnumPacket);                    \
    Func(UpdateTradePacket);                       \
    Func(CameraPacket);                            \
    Func(MobArmorEquipmentPacket);                 \
    Func(MobEffectPacket);                         \
    Func(MoveActorAbsolutePacket);                 \
    Func(NetworkStackLatencyPacket);               \
    Func(NpcRequestPacket);                        \
    Func(OnScreenTextureAnimationPacket);          \
    Func(PacketViolationWarningPacket);            \
    Func(PhotoTransferPacket);                     \
    Func(PlaySoundPacket);                         \
    Func(AnvilDamagePacket);                       \
    Func(BlockEventPacket);                        \
    Func(BookEditPacket);                          \
    Func(BossEventPacket);                         \
    Func(ClientboundMapItemDataPacket);            \
    Func(CommandBlockUpdatePacket);                \
    Func(CompletedUsingItemPacket);                \
    Func(ContainerSetDataPacket);                  \
    Func(CraftingEventPacket);                     \
    Func(DebugInfoPacket);                         \
    Func(EducationSettingsPacket);                 \
    Func(EmoteListPacket);                         \
    Func(EmotePacket);                             \
    Func(HurtArmorPacket);                         \
    Func(ItemFrameDropItemPacket);                 \
    Func(LabTablePacket);                          \
    Func(LecternUpdatePacket);                     \
    Func(LevelEventGenericPacket);                 \
    Func(PlayerEnchantOptionsPacket);              \
    Func(PlayerInputPacket);                       \
    Func(PlayerSkinPacket);                        \
    Func(PositionTrackingDBClientRequestPacket);   \
    Func(PositionTrackingDBServerBroadcastPacket); \
    Func(PurchaseReceiptPacket);                   \
    Func(ResourcePackChunkDataPacket);             \
    Func(ResourcePackChunkRequestPacket);          \
    Func(ResourcePackDataInfoPacket);              \
    Func(ScriptCustomEventPacket);                 \
    Func(SetDisplayObjectivePacket);               \
    Func(SetScorePacket);                          \
    Func(SetScoreboardIdentityPacket);             \
    Func(SetTitlePacket);                          \
    Func(ShowCreditsPacket);                       \
    Func(ShowStoreOfferPacket);                    \
    Func(SpawnExperienceOrbPacket);                \
    Func(SpawnParticleEffectPacket);               \
    Func(StructureBlockUpdatePacket);              \
    Func(StructureTemplateDataRequestPacket);      \
    Func(SubClientLoginPacket);                    \
    Func(SimpleEventPacket);                       \
    Func(AddBehaviorTreePacket);                   \
    Func(AvailableActorIdentifiersPacket);         \
    Func(AvailableCommandsPacket);                 \
    Func(BiomeDefinitionListPacket);               \
    Func(CraftingDataPacket);                      \
    Func(CreativeContentPacket);                   \
    Func(GameRulesChangedPacket);                  \
    Func(ResourcePackStackPacket);                 \
    Func(ResourcePacksInfoPacket);                 \
    Func(SetSpawnPositionPacket);                  \
    Func(StartGamePacket);                         \
    Func(AddPlayerPacket);                         \
    Func(LoginPacket);                             \
    Func(BlockPickRequestPacket);                  \
    Func(DisconnectPacket);                        \
    Func(GuiDataPickItemPacket);                   \
    Func(SetLocalPlayerAsInitializedPacket);       \
    Func(TextPacket);                              \
    Func(PlayerListPacket);                        \
    Func(PlayStatusPacket);                        \
    Func(ClientCacheStatusPacket);                 \
    Func(SetDifficultyPacket);                     \
    Func(ChangeDimensionPacket);                   \
    Func(ResourcePackClientResponsePacket);        \
    Func(SetActorLinkPacket);                      \
    Func(UpdatePlayerGameTypePacket);              \
    Func(RespawnPacket);                           \
    Func(TakeItemActorPacket);                     \
    Func(PlayerHotbarPacket);                      \
    Func(CommandOutputPacket);                     \
    Func(TickSyncPacket);                          \
    Func(CommandRequestPacket);                    \
    Func(ContainerOpenPacket);                     \
    Func(ContainerClosePacket);                    \
    Func(InventoryContentPacket);                  \
    Func(ServerSettingsResponsePacket);            \
    Func(InventorySlotPacket);                     \
    Func(UpdateBlockSyncedPacket);                 \
    Func(PlayerActionPacket);                      \
    Func(ItemStackRequestPacket);                  \
    Func(ItemStackResponsePacket);                 \
    Func(AdventureSettingsPacket);                 \
    Func(BlockActorDataPacket);                    \
    Func(EventPacket);                             \
    Func(SetHealthPacket);                         \
    Func(MobEquipmentPacket);                      \
    Func(AddItemActorPacket);                      \
    Func(UpdateAttributesPacket);                  \
    Func(InteractPacket);                          \
    Func(ActorEventPacket);                        \
    Func(LevelEventPacket);                        \
    Func(NetworkChunkPublisherUpdatePacket);       \
    Func(AnimatePacket);                           \
    Func(InventoryTransactionPacket);              \
    Func(AddActorPacket);                          \
    Func(MapInfoRequestPacket);                    \
    Func(SetActorMotionPacket);                    \
    Func(LevelSoundEventPacket);                   \
    Func(ClientCacheMissResponsePacket);           \
    Func(ClientCacheBlobStatusPacket);             \
    Func(LevelChunkPacket);                        \
    Func(SetActorDataPacket);                      \
    Func(UpdateBlockPacket);                       \
    Func(MoveActorDeltaPacket);                    \
    Func(MovePlayerPacket);                        \
    Func(PlayerAuthInputPacket);
    // /*Func(TickingAreasLoadStatusPacket);*/            \
    // /*Func(DimensionDataPacket);*/                     \
    // /*Func(AgentActionEventPacket);*/                  \
    // /*Func(ChangeMobPropertyPacket);*/                 \
    // /*Func(ChangeMobPropertyPacket);*/                 \
    // /*Func(LessonProgressPacket);*/                    \
    // /*Func(RequestAbilityPacket);*/                    \
    // /*Func(RequestPermissionsPacket);*/                \
    // /*Func(ToastRequestPacket);*/                      \
    // /*Func(UpdateAbilitiesPacket);*/                   \
    // /*Func(UpdateAdventureSettingsPacket);*/           \
    // /*Func(EditorNetworkPacket);*/                     \
    // /*Func(DeathInfoPacket);*/                         \
    // /*Func(FeatureRegistryPacket);*/                   \
    // /*Func(MotionPredictionHintsPacket);*/             \
    // /*Func(AnimateEntityPacket);*/                     \
    // /*Func(CameraShakePacket);*/                       \
    // /*Func(PlayerFogPacket);*/                         \
    // /*Func(CorrectPlayerMovePredictionPacket);*/       \
    // /*Func(ItemComponentPacket);*/                     \
    // /*Func(FilterTextPacket);*/                        \
    // /*Func(ClientboundDebugRendererPacket);*/          \
    // /*Func(SyncActorPropertyPacket);*/                 \
    // /*Func(SubChunkPacket);*/                          \
    // /*Func(SubChunkRequestPacket);*/                   \
    // /*Func(UpdateSubChunkBlocksPacket);*/              \
    // /*Func(CreatePhotoPacket);*/                       \
    // /*Func(EduUriResourcePacket);*/                    \
    // /*Func(NpcDialoguePacket);*/                       \
    // /*Func(SimulationTypePacket);*/                    \
    // /*Func(AddVolumeEntityPacket);*/                   \
    // /*Func(CodeBuilderSourcePacket);*/                 \
    // /*Func(PlayerStartItemCooldownPacket);*/           \
    // /*Func(ScriptMessagePacket);*/                     \
    // /*Func(RemoveVolumeEntityPacket);*/                \
    // Func(PassengerJumpPacket);                     \

#define DeclearClass(packet) class packet;

ForEachPacket(DeclearClass);

#pragma endregion

#ifdef GENERATE_PACKET

template <typename T>
inline void* VFTABLE_ADDR;
template <typename T>
inline size_t PACKET_SIZE;

inline void __initPacketVftable() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define INIT_ADDR(type) \
    VFTABLE_ADDR<type> = dlsym_real("??_7" #type "@@6B@");

    ForEachPacket(INIT_ADDR);

#undef INIT_ADDR
}

template <typename T>
inline void* getVftableAddr() {
    __initPacketVftable();
    return VFTABLE_ADDR<T>;
}

void __initPacketSize() {
    static bool inited = false;
    if (inited)
        return;
    inited = true;
#define SET_PACKET_SIZE(type)                              \
    if (getVftableAddr<type>() == *(void**)packet.get()) { \
        PACKET_SIZE<type> = size - 16;                     \
        continue;                                          \
    }
    int packetId = -1;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(++packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);

            ForEachPacket(SET_PACKET_SIZE);
            __debugbreak();
        }
    }
#undef SET_PACKET_SIZE
}

std::string getClassName(Packet* packet) {
#define RETURN_IF_FIND(type)                             \
    if (getVftableAddr<class type>() == *(void**)packet) \
        return #type;
    ForEachPacket(RETURN_IF_FIND);
    __debugbreak();
    return fmt::format("Unknown({})", packet->getId());
#undef RETURN_IF_FIND
}

inline void forEachPacket(std::function<void(Packet const& packet, std::string className, size_t size)> callback) {
    int packetId = 0;
    while (packetId < 200) {
        auto packet = MinecraftPackets::createPacket(packetId);
        if (packet) {
            auto size = _msize((void**)packet.get() - 2);
            // logger.warn("Packet: {},{},{},{},{}", magic_enum::enum_name((MinecraftPacketIds)packetId), packet->getName(), getClassName(packet.get()), packetId, size);

            auto className = getClassName(packet.get());
            callback(*packet, className, size - 16);
        }
        packetId++;
    }
}

template <typename T>
inline size_t getPacketSize() {
    __initPacketSize();
    return PACKET_SIZE<T>;
}

#pragma region Packet Command

#include <DynamicCommandAPI.h>
#include <llapi/mc/Minecraft.hpp>
#include <filesystem>
#include <Utils/FileHelper.h>
using Param = DynamicCommand::ParameterData;
using ParamType = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;
using Result = DynamicCommand::Result;

inline bool replaceString(std::string& content, std::string const& start, std::string const& end, std::string const& str, size_t offset = 0, bool exclude = true) {
    auto startOffset = content.find(start, offset);
    if (startOffset == content.npos)
        return false;
    if (exclude)
        startOffset += start.size();
    auto endOffset = end.empty() ? content.npos : content.find(end, startOffset);

    if (endOffset != content.npos && !exclude) {
        endOffset += sizeof(end);
    }
    content.replace(startOffset, endOffset - startOffset, str);
    return true;
}

void autoGenerate() {
    auto file = ReadAllFile(__FILE__, false);
    if (!file)
        __debugbreak();
    auto& content = file.value();

    std::ostringstream oss;

    // add static assert
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X}, \"size of {} should be {}\");\n", className, size, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("static_assert(sizeof({}) == 0x{:X} || sizeof({}) == 48, \"size of {} should be {} or 48(default)\");\n", className, size, className, className, size);
    });
    oss << std::endl;
    replaceString(content, "#ifdef SIZE_STATIC_ASSERT_IF_DEFINE\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    // add include
    oss << std::endl;
    forEachPacket([&](Packet const& packet, std::string className, size_t size) {
        oss << fmt::format("#include <llapi/mc/{}.hpp>\n", className);
    });
    oss << std::endl;
    replaceString(content, "#ifdef INCLUDE_ALL_PACKET\n", "#endif", oss.str());
    oss.clear();
    oss.str("");

    WriteAllFile(__FILE__, content, false);
}
template <typename T>
void __autoFill(std::string const& className) {
    if (sizeof(T) == getPacketSize<T>())
        return;

    std::filesystem::path McDir = std::filesystem::path(__FILEW__).parent_path().parent_path().parent_path().append("Header").append("MC");

    std::filesystem::path filePath = McDir.append(fmt::format("{}.hpp", className));
    auto file = ReadAllFile(filePath.string());
    if (!file) {
        __debugbreak();
        return;
    }
    auto& content = file.value();
    size_t fillerSize = getPacketSize<T>() - sizeof(T);
    std::string filler = fmt::format("    char filler[{}];\n", getPacketSize<T>() - 48);

    auto startOffset = content.find("// Add Member There");
    if (startOffset == content.npos) {
        startOffset = content.find("#define AFTER_EXTRA");
        if (startOffset == content.npos) {
            __debugbreak();
            return;
        }
        filler = "// Add Member There\n" + filler;
    }

    startOffset += std::string("// Add Member There").size() + 1;
    auto endOffset = content.find("#undef", startOffset);

    if (sizeof(T) != 48) {
        replaceString(content, "filler[", "]", std::to_string(getPacketSize<T>() - 48));
    } else {
        if (content.substr(startOffset, endOffset - startOffset) != "\n") {
            startOffset = content.find("\n\n", startOffset) + 1;
            __debugbreak();
        }
        content.insert(startOffset, filler);
    }
    logger.warn("add or change filler in file {}, size: {} ", filePath.filename().string(), getPacketSize<T>() - 48);
    WriteAllFile(filePath.string(), content);
    return;
}
void autoFill() {
#ifdef FILL_PACKET

#define AUTO_FILL(type) \
    __autoFill<type>(#type);
    ForEachPacket(AUTO_FILL);
#undef AUTO_FILL;

#endif // FILL_PACKET
}

void onExecute(DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
               std::unordered_map<std::string, Result>& results) {
    autoGenerate();
    autoFill();
    output.success("Generate finished");
}

TClasslessInstanceHook2("SetupPacketCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ") {
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    autoGenerate();
    autoFill();

    auto command = DynamicCommand::createCommand("pkt", "packet");
    command->addOverload();
    command->setCallback(onExecute);
    DynamicCommand::setup(std::move(command));
}

#pragma endregion

#endif // GENERATE_PACKET

#ifdef SIZE_STATIC_ASSERT

static_assert(sizeof(LoginPacket) == 0x40, "size of LoginPacket should be 64");
static_assert(sizeof(PlayStatusPacket) == 0x38, "size of PlayStatusPacket should be 56");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x50, "size of ServerToClientHandshakePacket should be 80");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x30, "size of ClientToServerHandshakePacket should be 48");
static_assert(sizeof(DisconnectPacket) == 0x58, "size of DisconnectPacket should be 88");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x68, "size of ResourcePacksInfoPacket should be 104");
static_assert(sizeof(ResourcePackStackPacket) == 0x128, "size of ResourcePackStackPacket should be 296");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x48, "size of ResourcePackClientResponsePacket should be 72");
static_assert(sizeof(TextPacket) == 0xD8, "size of TextPacket should be 216");
static_assert(sizeof(SetTimePacket) == 0x38, "size of SetTimePacket should be 56");
static_assert(sizeof(StartGamePacket) == 0x520, "size of StartGamePacket should be 1312");
static_assert(sizeof(AddPlayerPacket) == 0x4D8, "size of AddPlayerPacket should be 1240");
static_assert(sizeof(AddActorPacket) == 0x180, "size of AddActorPacket should be 384");
static_assert(sizeof(RemoveActorPacket) == 0x38, "size of RemoveActorPacket should be 56");
static_assert(sizeof(AddItemActorPacket) == 0xD8, "size of AddItemActorPacket should be 216");
static_assert(sizeof(TakeItemActorPacket) == 0x40, "size of TakeItemActorPacket should be 64");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x50, "size of MoveActorAbsolutePacket should be 80");
static_assert(sizeof(MovePlayerPacket) == 0x70, "size of MovePlayerPacket should be 112");
static_assert(sizeof(PassengerJumpPacket) == 0x38, "size of PassengerJumpPacket should be 56");
static_assert(sizeof(UpdateBlockPacket) == 0x48, "size of UpdateBlockPacket should be 72");
static_assert(sizeof(AddPaintingPacket) == 0x70, "size of AddPaintingPacket should be 112");
static_assert(sizeof(TickSyncPacket) == 0x40, "size of TickSyncPacket should be 64");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x50, "size of LevelSoundEventPacketV1 should be 80");
static_assert(sizeof(LevelEventPacket) == 0x48, "size of LevelEventPacket should be 72");
static_assert(sizeof(BlockEventPacket) == 0x48, "size of BlockEventPacket should be 72");
static_assert(sizeof(ActorEventPacket) == 0x40, "size of ActorEventPacket should be 64");
static_assert(sizeof(MobEffectPacket) == 0x50, "size of MobEffectPacket should be 80");
static_assert(sizeof(UpdateAttributesPacket) == 0x58, "size of UpdateAttributesPacket should be 88");
static_assert(sizeof(InventoryTransactionPacket) == 0x68, "size of InventoryTransactionPacket should be 104");
static_assert(sizeof(MobEquipmentPacket) == 0xA0, "size of MobEquipmentPacket should be 160");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x198, "size of MobArmorEquipmentPacket should be 408");
static_assert(sizeof(InteractPacket) == 0x50, "size of InteractPacket should be 80");
static_assert(sizeof(BlockPickRequestPacket) == 0x40, "size of BlockPickRequestPacket should be 64");
static_assert(sizeof(ActorPickRequestPacket) == 0x40, "size of ActorPickRequestPacket should be 64");
static_assert(sizeof(PlayerActionPacket) == 0x58, "size of PlayerActionPacket should be 88");
static_assert(sizeof(HurtArmorPacket) == 0x40, "size of HurtArmorPacket should be 64");
static_assert(sizeof(SetActorDataPacket) == 0x58, "size of SetActorDataPacket should be 88");
static_assert(sizeof(SetActorMotionPacket) == 0x48, "size of SetActorMotionPacket should be 72");
static_assert(sizeof(SetActorLinkPacket) == 0x50, "size of SetActorLinkPacket should be 80");
static_assert(sizeof(SetHealthPacket) == 0x38, "size of SetHealthPacket should be 56");
static_assert(sizeof(SetSpawnPositionPacket) == 0x50, "size of SetSpawnPositionPacket should be 80");
static_assert(sizeof(AnimatePacket) == 0x40, "size of AnimatePacket should be 64");
static_assert(sizeof(RespawnPacket) == 0x48, "size of RespawnPacket should be 72");
static_assert(sizeof(ContainerOpenPacket) == 0x48, "size of ContainerOpenPacket should be 72");
static_assert(sizeof(ContainerClosePacket) == 0x38, "size of ContainerClosePacket should be 56");
static_assert(sizeof(PlayerHotbarPacket) == 0x38, "size of PlayerHotbarPacket should be 56");
static_assert(sizeof(InventoryContentPacket) == 0x50, "size of InventoryContentPacket should be 80");
static_assert(sizeof(InventorySlotPacket) == 0x90, "size of InventorySlotPacket should be 144");
static_assert(sizeof(ContainerSetDataPacket) == 0x40, "size of ContainerSetDataPacket should be 64");
static_assert(sizeof(CraftingDataPacket) == 0x98, "size of CraftingDataPacket should be 152");
static_assert(sizeof(CraftingEventPacket) == 0x78, "size of CraftingEventPacket should be 120");
static_assert(sizeof(GuiDataPickItemPacket) == 0x78, "size of GuiDataPickItemPacket should be 120");
static_assert(sizeof(AdventureSettingsPacket) == 0x50, "size of AdventureSettingsPacket should be 80");
static_assert(sizeof(BlockActorDataPacket) == 0x58, "size of BlockActorDataPacket should be 88");
static_assert(sizeof(PlayerInputPacket) == 0x40, "size of PlayerInputPacket should be 64");
static_assert(sizeof(LevelChunkPacket) == 0x88, "size of LevelChunkPacket should be 136");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x38, "size of SetCommandsEnabledPacket should be 56");
static_assert(sizeof(SetDifficultyPacket) == 0x38, "size of SetDifficultyPacket should be 56");
static_assert(sizeof(ChangeDimensionPacket) == 0x48, "size of ChangeDimensionPacket should be 72");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x38, "size of SetPlayerGameTypePacket should be 56");
static_assert(sizeof(PlayerListPacket) == 0x50, "size of PlayerListPacket should be 80");
static_assert(sizeof(SimpleEventPacket) == 0x38, "size of SimpleEventPacket should be 56");
static_assert(sizeof(EventPacket) == 0x140, "size of EventPacket should be 320");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x40, "size of SpawnExperienceOrbPacket should be 64");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xC8, "size of ClientboundMapItemDataPacket should be 200");
static_assert(sizeof(MapInfoRequestPacket) == 0x50, "size of MapInfoRequestPacket should be 80");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x38, "size of RequestChunkRadiusPacket should be 56");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x38, "size of ChunkRadiusUpdatedPacket should be 56");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x40, "size of ItemFrameDropItemPacket should be 64");
static_assert(sizeof(GameRulesChangedPacket) == 0x48, "size of GameRulesChangedPacket should be 72");
static_assert(sizeof(CameraPacket) == 0x40, "size of CameraPacket should be 64");
static_assert(sizeof(BossEventPacket) == 0x80, "size of BossEventPacket should be 128");
static_assert(sizeof(ShowCreditsPacket) == 0x40, "size of ShowCreditsPacket should be 64");
static_assert(sizeof(AvailableCommandsPacket) == 0xC0, "size of AvailableCommandsPacket should be 192");
static_assert(sizeof(CommandRequestPacket) == 0x98, "size of CommandRequestPacket should be 152");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xB0, "size of CommandBlockUpdatePacket should be 176");
static_assert(sizeof(CommandOutputPacket) == 0xA0, "size of CommandOutputPacket should be 160");
static_assert(sizeof(UpdateTradePacket) == 0x90, "size of UpdateTradePacket should be 144");
static_assert(sizeof(UpdateEquipPacket) == 0x58, "size of UpdateEquipPacket should be 88");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x88, "size of ResourcePackDataInfoPacket should be 136");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x78, "size of ResourcePackChunkDataPacket should be 120");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x58, "size of ResourcePackChunkRequestPacket should be 88");
static_assert(sizeof(TransferPacket) == 0x58, "size of TransferPacket should be 88");
static_assert(sizeof(PlaySoundPacket) == 0x68, "size of PlaySoundPacket should be 104");
static_assert(sizeof(StopSoundPacket) == 0x58, "size of StopSoundPacket should be 88");
static_assert(sizeof(SetTitlePacket) == 0xA8, "size of SetTitlePacket should be 168");
static_assert(sizeof(AddBehaviorTreePacket) == 0x50, "size of AddBehaviorTreePacket should be 80");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xF8, "size of StructureBlockUpdatePacket should be 248");
static_assert(sizeof(ShowStoreOfferPacket) == 0x78, "size of ShowStoreOfferPacket should be 120");
static_assert(sizeof(PurchaseReceiptPacket) == 0x48, "size of PurchaseReceiptPacket should be 72");
static_assert(sizeof(PlayerSkinPacket) == 0x2E8, "size of PlayerSkinPacket should be 744");
static_assert(sizeof(SubClientLoginPacket) == 0x38, "size of SubClientLoginPacket should be 56");
static_assert(sizeof(AutomationClientConnectPacket) == 0x50, "size of AutomationClientConnectPacket should be 80");
static_assert(sizeof(SetLastHurtByPacket) == 0x38, "size of SetLastHurtByPacket should be 56");
static_assert(sizeof(BookEditPacket) == 0xA0, "size of BookEditPacket should be 160");
static_assert(sizeof(NpcRequestPacket) == 0x88, "size of NpcRequestPacket should be 136");
static_assert(sizeof(PhotoTransferPacket) == 0xC0, "size of PhotoTransferPacket should be 192");
static_assert(sizeof(ModalFormRequestPacket) == 0x58, "size of ModalFormRequestPacket should be 88");
static_assert(sizeof(ModalFormResponsePacket) == 0x58, "size of ModalFormResponsePacket should be 88");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x30, "size of ServerSettingsRequestPacket should be 48");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x58, "size of ServerSettingsResponsePacket should be 88");
static_assert(sizeof(ShowProfilePacket) == 0x50, "size of ShowProfilePacket should be 80");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x38, "size of SetDefaultGameTypePacket should be 56");
static_assert(sizeof(RemoveObjectivePacket) == 0x50, "size of RemoveObjectivePacket should be 80");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB8, "size of SetDisplayObjectivePacket should be 184");
static_assert(sizeof(SetScorePacket) == 0x50, "size of SetScorePacket should be 80");
static_assert(sizeof(LabTablePacket) == 0x48, "size of LabTablePacket should be 72");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x58, "size of UpdateBlockSyncedPacket should be 88");
static_assert(sizeof(MoveActorDeltaPacket) == 0x70, "size of MoveActorDeltaPacket should be 112");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x50, "size of SetScoreboardIdentityPacket should be 80");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x38, "size of SetLocalPlayerAsInitializedPacket should be 56");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x70, "size of UpdateSoftEnumPacket should be 112");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x40, "size of NetworkStackLatencyPacket should be 64");
static_assert(sizeof(ScriptCustomEventPacket) == 0x60, "size of ScriptCustomEventPacket should be 96");
static_assert(sizeof(SpawnParticleEffectPacket) == 0xB0, "size of SpawnParticleEffectPacket should be 176");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x48, "size of AvailableActorIdentifiersPacket should be 72");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x70, "size of LevelSoundEventPacketV2 should be 112");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x58, "size of NetworkChunkPublisherUpdatePacket should be 88");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x48, "size of BiomeDefinitionListPacket should be 72");
static_assert(sizeof(LevelSoundEventPacket) == 0x70, "size of LevelSoundEventPacket should be 112");
static_assert(sizeof(LevelEventGenericPacket) == 0x40, "size of LevelEventGenericPacket should be 64");
static_assert(sizeof(LecternUpdatePacket) == 0x48, "size of LecternUpdatePacket should be 72");
static_assert(sizeof(AddEntityPacket) == 0x38, "size of AddEntityPacket should be 56");
static_assert(sizeof(RemoveEntityPacket) == 0x38, "size of RemoveEntityPacket should be 56");
static_assert(sizeof(ClientCacheStatusPacket) == 0x38, "size of ClientCacheStatusPacket should be 56");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x38, "size of OnScreenTextureAnimationPacket should be 56");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x40, "size of MapCreateLockedCopyPacket should be 64");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xD0, "size of StructureTemplateDataRequestPacket should be 208");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x60, "size of StructureTemplateDataResponsePacket should be 96");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x60, "size of ClientCacheBlobStatusPacket should be 96");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x88, "size of ClientCacheMissResponsePacket should be 136");
static_assert(sizeof(EducationSettingsPacket) == 0x178, "size of EducationSettingsPacket should be 376");
static_assert(sizeof(EmotePacket) == 0x60, "size of EmotePacket should be 96");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x38, "size of MultiplayerSettingsPacket should be 56");
static_assert(sizeof(SettingsCommandPacket) == 0x58, "size of SettingsCommandPacket should be 88");
static_assert(sizeof(AnvilDamagePacket) == 0x40, "size of AnvilDamagePacket should be 64");
static_assert(sizeof(CompletedUsingItemPacket) == 0x38, "size of CompletedUsingItemPacket should be 56");
static_assert(sizeof(NetworkSettingsPacket) == 0x38, "size of NetworkSettingsPacket should be 56");
static_assert(sizeof(PlayerAuthInputPacket) == 0xB0, "size of PlayerAuthInputPacket should be 176");
static_assert(sizeof(CreativeContentPacket) == 0x50, "size of CreativeContentPacket should be 80");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x48, "size of PlayerEnchantOptionsPacket should be 72");
static_assert(sizeof(ItemStackRequestPacket) == 0x38, "size of ItemStackRequestPacket should be 56");
static_assert(sizeof(ItemStackResponsePacket) == 0x48, "size of ItemStackResponsePacket should be 72");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x40, "size of PlayerArmorDamagePacket should be 64");
static_assert(sizeof(CodeBuilderPacket) == 0x58, "size of CodeBuilderPacket should be 88");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x40, "size of UpdatePlayerGameTypePacket should be 64");
static_assert(sizeof(EmoteListPacket) == 0x50, "size of EmoteListPacket should be 80");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x50, "size of PositionTrackingDBServerBroadcastPacket should be 80");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x38, "size of PositionTrackingDBClientRequestPacket should be 56");
static_assert(sizeof(DebugInfoPacket) == 0x58, "size of DebugInfoPacket should be 88");
static_assert(sizeof(PacketViolationWarningPacket) == 0x60, "size of PacketViolationWarningPacket should be 96");
static_assert(sizeof(MotionPredictionHintsPacket) == 0x48, "size of MotionPredictionHintsPacket should be 72");
static_assert(sizeof(AnimateEntityPacket) == 0xD8, "size of AnimateEntityPacket should be 216");
static_assert(sizeof(CameraShakePacket) == 0x40, "size of CameraShakePacket should be 64");
static_assert(sizeof(PlayerFogPacket) == 0x48, "size of PlayerFogPacket should be 72");
static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x58, "size of CorrectPlayerMovePredictionPacket should be 88");
static_assert(sizeof(ItemComponentPacket) == 0x48, "size of ItemComponentPacket should be 72");
static_assert(sizeof(FilterTextPacket) == 0x58, "size of FilterTextPacket should be 88");
static_assert(sizeof(ClientboundDebugRendererPacket) == 0x88, "size of ClientboundDebugRendererPacket should be 136");
static_assert(sizeof(SyncActorPropertyPacket) == 0x48, "size of SyncActorPropertyPacket should be 72");
static_assert(sizeof(AddVolumeEntityPacket) == 0x120, "size of AddVolumeEntityPacket should be 288");
static_assert(sizeof(RemoveVolumeEntityPacket) == 0x40, "size of RemoveVolumeEntityPacket should be 64");
static_assert(sizeof(SimulationTypePacket) == 0x38, "size of SimulationTypePacket should be 56");
static_assert(sizeof(NpcDialoguePacket) == 0xC0, "size of NpcDialoguePacket should be 192");
static_assert(sizeof(EduUriResourcePacket) == 0x70, "size of EduUriResourcePacket should be 112");
static_assert(sizeof(CreatePhotoPacket) == 0x78, "size of CreatePhotoPacket should be 120");
static_assert(sizeof(UpdateSubChunkBlocksPacket) == 0x70, "size of UpdateSubChunkBlocksPacket should be 112");
static_assert(sizeof(SubChunkPacket) == 0x60, "size of SubChunkPacket should be 96");
static_assert(sizeof(SubChunkRequestPacket) == 0x80, "size of SubChunkRequestPacket should be 128");
static_assert(sizeof(PlayerStartItemCooldownPacket) == 0x58, "size of PlayerStartItemCooldownPacket should be 88");
static_assert(sizeof(ScriptMessagePacket) == 0x70, "size of ScriptMessagePacket should be 112");
static_assert(sizeof(CodeBuilderSourcePacket) == 0x58, "size of CodeBuilderSourcePacket should be 88");
static_assert(sizeof(TickingAreasLoadStatusPacket) == 0x38, "size of TickingAreasLoadStatusPacket should be 56");
static_assert(sizeof(DimensionDataPacket) == 0x40, "size of DimensionDataPacket should be 64");
static_assert(sizeof(AgentActionEventPacket) == 0x68, "size of AgentActionEventPacket should be 104");
static_assert(sizeof(ChangeMobPropertyPacket) == 0x88, "size of ChangeMobPropertyPacket should be 136");
static_assert(sizeof(LessonProgressPacket) == 0x58, "size of LessonProgressPacket should be 88");
static_assert(sizeof(RequestAbilityPacket) == 0x40, "size of RequestAbilityPacket should be 64");
static_assert(sizeof(RequestPermissionsPacket) == 0x40, "size of RequestPermissionsPacket should be 64");
static_assert(sizeof(ToastRequestPacket) == 0x70, "size of ToastRequestPacket should be 112");
static_assert(sizeof(UpdateAbilitiesPacket) == 0x58, "size of UpdateAbilitiesPacket should be 88");
static_assert(sizeof(UpdateAdventureSettingsPacket) == 0x38, "size of UpdateAdventureSettingsPacket should be 56");
static_assert(sizeof(DeathInfoPacket) == 0x68, "size of DeathInfoPacket should be 104");
static_assert(sizeof(EditorNetworkPacket) == 0x48, "size of EditorNetworkPacket should be 72");
static_assert(sizeof(FeatureRegistryPacket) == 0x48, "size of FeatureRegistryPacket should be 72");

#endif // SIZE_STATIC_ASSERT

#ifdef SIZE_STATIC_ASSERT_IF_DEFINE

static_assert(sizeof(LoginPacket) == 0x38 || sizeof(LoginPacket) == 40, "size of LoginPacket should be 64 or 48(default)");
static_assert(sizeof(PlayStatusPacket) == 0x30 || sizeof(PlayStatusPacket) == 40, "size of PlayStatusPacket should be 56 or 48(default)");
static_assert(sizeof(ServerToClientHandshakePacket) == 0x48 || sizeof(ServerToClientHandshakePacket) == 40, "size of ServerToClientHandshakePacket should be 80 or 48(default)");
static_assert(sizeof(ClientToServerHandshakePacket) == 0x28 || sizeof(ClientToServerHandshakePacket) == 40, "size of ClientToServerHandshakePacket should be 48 or 48(default)");
static_assert(sizeof(DisconnectPacket) == 0x50 || sizeof(DisconnectPacket) == 40, "size of DisconnectPacket should be 88 or 48(default)");
static_assert(sizeof(ResourcePacksInfoPacket) == 0x60 || sizeof(ResourcePacksInfoPacket) == 40, "size of ResourcePacksInfoPacket should be 104 or 48(default)");
static_assert(sizeof(ResourcePackStackPacket) == 0x120 || sizeof(ResourcePackStackPacket) == 40, "size of ResourcePackStackPacket should be 296 or 48(default)");
static_assert(sizeof(ResourcePackClientResponsePacket) == 0x40 || sizeof(ResourcePackClientResponsePacket) == 40, "size of ResourcePackClientResponsePacket should be 72 or 48(default)");
static_assert(sizeof(TextPacket) == 0xD0 || sizeof(TextPacket) == 40, "size of TextPacket should be 216 or 48(default)");
static_assert(sizeof(SetTimePacket) == 0x30 || sizeof(SetTimePacket) == 40, "size of SetTimePacket should be 56 or 48(default)");
static_assert(sizeof(StartGamePacket) == 0x518 || sizeof(StartGamePacket) == 40, "size of StartGamePacket should be 1312 or 48(default)");
static_assert(sizeof(AddPlayerPacket) == 0x4D0 || sizeof(AddPlayerPacket) == 40, "size of AddPlayerPacket should be 1240 or 48(default)");
static_assert(sizeof(AddActorPacket) == 0x178 || sizeof(AddActorPacket) == 40, "size of AddActorPacket should be 384 or 48(default)");
static_assert(sizeof(RemoveActorPacket) == 0x30 || sizeof(RemoveActorPacket) == 40, "size of RemoveActorPacket should be 56 or 48(default)");
static_assert(sizeof(AddItemActorPacket) == 0xD0 || sizeof(AddItemActorPacket) == 40, "size of AddItemActorPacket should be 216 or 48(default)");
static_assert(sizeof(TakeItemActorPacket) == 0x38 || sizeof(TakeItemActorPacket) == 40, "size of TakeItemActorPacket should be 64 or 48(default)");
static_assert(sizeof(MoveActorAbsolutePacket) == 0x48 || sizeof(MoveActorAbsolutePacket) == 40, "size of MoveActorAbsolutePacket should be 80 or 48(default)");
static_assert(sizeof(MovePlayerPacket) == 0x68 || sizeof(MovePlayerPacket) == 40, "size of MovePlayerPacket should be 112 or 48(default)");
// static_assert(sizeof(PassengerJumpPacket) == 0x38 || sizeof(PassengerJumpPacket) == 48, "size of PassengerJumpPacket should be 56 or 48(default)");
static_assert(sizeof(UpdateBlockPacket) == 0x40 || sizeof(UpdateBlockPacket) == 40, "size of UpdateBlockPacket should be 72 or 48(default)");
static_assert(sizeof(AddPaintingPacket) == 0x68 || sizeof(AddPaintingPacket) == 40, "size of AddPaintingPacket should be 112 or 48(default)");
static_assert(sizeof(TickSyncPacket) == 0x38 || sizeof(TickSyncPacket) == 40, "size of TickSyncPacket should be 64 or 48(default)");
static_assert(sizeof(LevelSoundEventPacketV1) == 0x48 || sizeof(LevelSoundEventPacketV1) == 40, "size of LevelSoundEventPacketV1 should be 80 or 48(default)");
static_assert(sizeof(LevelEventPacket) == 0x40 || sizeof(LevelEventPacket) == 40, "size of LevelEventPacket should be 72 or 48(default)");
static_assert(sizeof(BlockEventPacket) == 0x40 || sizeof(BlockEventPacket) == 40, "size of BlockEventPacket should be 72 or 48(default)");
static_assert(sizeof(ActorEventPacket) == 0x38 || sizeof(ActorEventPacket) == 40, "size of ActorEventPacket should be 64 or 48(default)");
static_assert(sizeof(MobEffectPacket) == 0x48 || sizeof(MobEffectPacket) == 40, "size of MobEffectPacket should be 80 or 48(default)");
static_assert(sizeof(UpdateAttributesPacket) == 0x50 || sizeof(UpdateAttributesPacket) == 40, "size of UpdateAttributesPacket should be 88 or 48(default)");
static_assert(sizeof(InventoryTransactionPacket) == 0x60 || sizeof(InventoryTransactionPacket) == 40, "size of InventoryTransactionPacket should be 104 or 48(default)");
static_assert(sizeof(MobEquipmentPacket) == 0x98 || sizeof(MobEquipmentPacket) == 40, "size of MobEquipmentPacket should be 160 or 48(default)");
static_assert(sizeof(MobArmorEquipmentPacket) == 0x190 || sizeof(MobArmorEquipmentPacket) == 40, "size of MobArmorEquipmentPacket should be 408 or 48(default)");
static_assert(sizeof(InteractPacket) == 0x48 || sizeof(InteractPacket) == 40, "size of InteractPacket should be 80 or 48(default)");
static_assert(sizeof(BlockPickRequestPacket) == 0x38 || sizeof(BlockPickRequestPacket) == 40, "size of BlockPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(ActorPickRequestPacket) == 0x38 || sizeof(ActorPickRequestPacket) == 40, "size of ActorPickRequestPacket should be 64 or 48(default)");
static_assert(sizeof(PlayerActionPacket) == 0x48 || sizeof(PlayerActionPacket) == 40, "size of PlayerActionPacket should be 88 or 48(default)");
static_assert(sizeof(HurtArmorPacket) == 0x38 || sizeof(HurtArmorPacket) == 40, "size of HurtArmorPacket should be 64 or 48(default)");
static_assert(sizeof(SetActorDataPacket) == 0x50 || sizeof(SetActorDataPacket) == 40, "size of SetActorDataPacket should be 88 or 48(default)");
static_assert(sizeof(SetActorMotionPacket) == 0x40 || sizeof(SetActorMotionPacket) == 40, "size of SetActorMotionPacket should be 72 or 48(default)");
static_assert(sizeof(SetActorLinkPacket) == 0x48 || sizeof(SetActorLinkPacket) == 40, "size of SetActorLinkPacket should be 80 or 48(default)");
static_assert(sizeof(SetHealthPacket) == 0x30 || sizeof(SetHealthPacket) == 40, "size of SetHealthPacket should be 56 or 48(default)");
static_assert(sizeof(SetSpawnPositionPacket) == 0x48 || sizeof(SetSpawnPositionPacket) == 40, "size of SetSpawnPositionPacket should be 80 or 48(default)");
static_assert(sizeof(AnimatePacket) == 0x38 || sizeof(AnimatePacket) == 40, "size of AnimatePacket should be 64 or 48(default)");
static_assert(sizeof(RespawnPacket) == 0x40 || sizeof(RespawnPacket) == 40, "size of RespawnPacket should be 72 or 48(default)");
static_assert(sizeof(ContainerOpenPacket) == 0x40 || sizeof(ContainerOpenPacket) == 40, "size of ContainerOpenPacket should be 72 or 48(default)");
static_assert(sizeof(ContainerClosePacket) == 0x30 || sizeof(ContainerClosePacket) == 40, "size of ContainerClosePacket should be 56 or 48(default)");
static_assert(sizeof(PlayerHotbarPacket) == 0x30 || sizeof(PlayerHotbarPacket) == 40, "size of PlayerHotbarPacket should be 56 or 48(default)");
static_assert(sizeof(InventoryContentPacket) == 0x48 || sizeof(InventoryContentPacket) == 40, "size of InventoryContentPacket should be 80 or 48(default)");
static_assert(sizeof(InventorySlotPacket) == 0x88 || sizeof(InventorySlotPacket) == 40, "size of InventorySlotPacket should be 144 or 48(default)");
static_assert(sizeof(ContainerSetDataPacket) == 0x38 || sizeof(ContainerSetDataPacket) == 40, "size of ContainerSetDataPacket should be 64 or 48(default)");
static_assert(sizeof(CraftingDataPacket) == 0x90 || sizeof(CraftingDataPacket) == 40, "size of CraftingDataPacket should be 152 or 48(default)");
static_assert(sizeof(CraftingEventPacket) == 0x70 || sizeof(CraftingEventPacket) == 40, "size of CraftingEventPacket should be 120 or 48(default)");
static_assert(sizeof(GuiDataPickItemPacket) == 0x70 || sizeof(GuiDataPickItemPacket) == 40, "size of GuiDataPickItemPacket should be 120 or 48(default)");
static_assert(sizeof(AdventureSettingsPacket) == 0x48 || sizeof(AdventureSettingsPacket) == 40, "size of AdventureSettingsPacket should be 80 or 48(default)");
static_assert(sizeof(BlockActorDataPacket) == 0x50 || sizeof(BlockActorDataPacket) == 40, "size of BlockActorDataPacket should be 88 or 48(default)");
static_assert(sizeof(PlayerInputPacket) == 0x38 || sizeof(PlayerInputPacket) == 40, "size of PlayerInputPacket should be 64 or 48(default)");
static_assert(sizeof(LevelChunkPacket) == 0x80 || sizeof(LevelChunkPacket) == 40, "size of LevelChunkPacket should be 136 or 48(default)");
static_assert(sizeof(SetCommandsEnabledPacket) == 0x30 || sizeof(SetCommandsEnabledPacket) == 40, "size of SetCommandsEnabledPacket should be 56 or 48(default)");
static_assert(sizeof(SetDifficultyPacket) == 0x30 || sizeof(SetDifficultyPacket) == 40, "size of SetDifficultyPacket should be 56 or 48(default)");
static_assert(sizeof(ChangeDimensionPacket) == 0x40 || sizeof(ChangeDimensionPacket) == 40, "size of ChangeDimensionPacket should be 72 or 48(default)");
static_assert(sizeof(SetPlayerGameTypePacket) == 0x30 || sizeof(SetPlayerGameTypePacket) == 40, "size of SetPlayerGameTypePacket should be 56 or 48(default)");
static_assert(sizeof(PlayerListPacket) == 0x48 || sizeof(PlayerListPacket) == 40, "size of PlayerListPacket should be 80 or 48(default)");
static_assert(sizeof(SimpleEventPacket) == 0x30 || sizeof(SimpleEventPacket) == 40, "size of SimpleEventPacket should be 56 or 48(default)");
static_assert(sizeof(EventPacket) == 0x138 || sizeof(EventPacket) == 40, "size of EventPacket should be 320 or 48(default)");
static_assert(sizeof(SpawnExperienceOrbPacket) == 0x38 || sizeof(SpawnExperienceOrbPacket) == 40, "size of SpawnExperienceOrbPacket should be 64 or 48(default)");
static_assert(sizeof(ClientboundMapItemDataPacket) == 0xC0 || sizeof(ClientboundMapItemDataPacket) == 40, "size of ClientboundMapItemDataPacket should be 200 or 48(default)");
static_assert(sizeof(MapInfoRequestPacket) == 0x48 || sizeof(MapInfoRequestPacket) == 40, "size of MapInfoRequestPacket should be 80 or 48(default)");
static_assert(sizeof(RequestChunkRadiusPacket) == 0x30 || sizeof(RequestChunkRadiusPacket) == 40, "size of RequestChunkRadiusPacket should be 56 or 48(default)");
static_assert(sizeof(ChunkRadiusUpdatedPacket) == 0x30 || sizeof(ChunkRadiusUpdatedPacket) == 40, "size of ChunkRadiusUpdatedPacket should be 56 or 48(default)");
static_assert(sizeof(ItemFrameDropItemPacket) == 0x38 || sizeof(ItemFrameDropItemPacket) == 40, "size of ItemFrameDropItemPacket should be 64 or 48(default)");
static_assert(sizeof(GameRulesChangedPacket) == 0x40 || sizeof(GameRulesChangedPacket) == 40, "size of GameRulesChangedPacket should be 72 or 48(default)");
static_assert(sizeof(CameraPacket) == 0x38 || sizeof(CameraPacket) == 40, "size of CameraPacket should be 64 or 48(default)");
static_assert(sizeof(BossEventPacket) == 0x78 || sizeof(BossEventPacket) == 40, "size of BossEventPacket should be 128 or 48(default)");
static_assert(sizeof(ShowCreditsPacket) == 0x38 || sizeof(ShowCreditsPacket) == 40, "size of ShowCreditsPacket should be 64 or 48(default)");
static_assert(sizeof(AvailableCommandsPacket) == 0xB8 || sizeof(AvailableCommandsPacket) == 40, "size of AvailableCommandsPacket should be 192 or 48(default)");
static_assert(sizeof(CommandRequestPacket) == 0x90 || sizeof(CommandRequestPacket) == 40, "size of CommandRequestPacket should be 152 or 48(default)");
static_assert(sizeof(CommandBlockUpdatePacket) == 0xA8 || sizeof(CommandBlockUpdatePacket) == 40, "size of CommandBlockUpdatePacket should be 176 or 48(default)");
static_assert(sizeof(CommandOutputPacket) == 0x98 || sizeof(CommandOutputPacket) == 40, "size of CommandOutputPacket should be 160 or 48(default)");
static_assert(sizeof(UpdateTradePacket) == 0x88 || sizeof(UpdateTradePacket) == 40, "size of UpdateTradePacket should be 144 or 48(default)");
static_assert(sizeof(UpdateEquipPacket) == 0x50 || sizeof(UpdateEquipPacket) == 40, "size of UpdateEquipPacket should be 88 or 48(default)");
static_assert(sizeof(ResourcePackDataInfoPacket) == 0x80 || sizeof(ResourcePackDataInfoPacket) == 40, "size of ResourcePackDataInfoPacket should be 136 or 48(default)");
static_assert(sizeof(ResourcePackChunkDataPacket) == 0x70 || sizeof(ResourcePackChunkDataPacket) == 40, "size of ResourcePackChunkDataPacket should be 120 or 48(default)");
static_assert(sizeof(ResourcePackChunkRequestPacket) == 0x50 || sizeof(ResourcePackChunkRequestPacket) == 40, "size of ResourcePackChunkRequestPacket should be 88 or 48(default)");
static_assert(sizeof(TransferPacket) == 0x50 || sizeof(TransferPacket) == 40, "size of TransferPacket should be 88 or 48(default)");
static_assert(sizeof(PlaySoundPacket) == 0x60 || sizeof(PlaySoundPacket) == 40, "size of PlaySoundPacket should be 104 or 48(default)");
static_assert(sizeof(StopSoundPacket) == 0x50 || sizeof(StopSoundPacket) == 40, "size of StopSoundPacket should be 88 or 48(default)");
static_assert(sizeof(SetTitlePacket) == 0xA0 || sizeof(SetTitlePacket) == 40, "size of SetTitlePacket should be 168 or 48(default)");
static_assert(sizeof(AddBehaviorTreePacket) == 0x48 || sizeof(AddBehaviorTreePacket) == 40, "size of AddBehaviorTreePacket should be 80 or 48(default)");
static_assert(sizeof(StructureBlockUpdatePacket) == 0xF0 || sizeof(StructureBlockUpdatePacket) == 40, "size of StructureBlockUpdatePacket should be 248 or 48(default)");
static_assert(sizeof(ShowStoreOfferPacket) == 0x70 || sizeof(ShowStoreOfferPacket) == 40, "size of ShowStoreOfferPacket should be 120 or 48(default)");
static_assert(sizeof(PurchaseReceiptPacket) == 0x40 || sizeof(PurchaseReceiptPacket) == 40, "size of PurchaseReceiptPacket should be 72 or 48(default)");
static_assert(sizeof(PlayerSkinPacket) == 0x2E0 || sizeof(PlayerSkinPacket) == 40, "size of PlayerSkinPacket should be 744 or 48(default)");
static_assert(sizeof(SubClientLoginPacket) == 0x30 || sizeof(SubClientLoginPacket) == 40, "size of SubClientLoginPacket should be 56 or 48(default)");
static_assert(sizeof(AutomationClientConnectPacket) == 0x48 || sizeof(AutomationClientConnectPacket) == 40, "size of AutomationClientConnectPacket should be 80 or 48(default)");
static_assert(sizeof(SetLastHurtByPacket) == 0x30 || sizeof(SetLastHurtByPacket) == 40, "size of SetLastHurtByPacket should be 56 or 48(default)");
static_assert(sizeof(BookEditPacket) == 0x98 || sizeof(BookEditPacket) == 40, "size of BookEditPacket should be 160 or 48(default)");
static_assert(sizeof(NpcRequestPacket) == 0x80 || sizeof(NpcRequestPacket) == 40, "size of NpcRequestPacket should be 136 or 48(default)");
static_assert(sizeof(PhotoTransferPacket) == 0xB8 || sizeof(PhotoTransferPacket) == 40, "size of PhotoTransferPacket should be 192 or 48(default)");
static_assert(sizeof(ModalFormRequestPacket) == 0x50 || sizeof(ModalFormRequestPacket) == 40, "size of ModalFormRequestPacket should be 88 or 48(default)");
static_assert(sizeof(ModalFormResponsePacket) == 0x50 || sizeof(ModalFormResponsePacket) == 40, "size of ModalFormResponsePacket should be 88 or 48(default)");
static_assert(sizeof(ServerSettingsRequestPacket) == 0x28 || sizeof(ServerSettingsRequestPacket) == 40, "size of ServerSettingsRequestPacket should be 48 or 48(default)");
static_assert(sizeof(ServerSettingsResponsePacket) == 0x50 || sizeof(ServerSettingsResponsePacket) == 40, "size of ServerSettingsResponsePacket should be 88 or 48(default)");
static_assert(sizeof(ShowProfilePacket) == 0x48 || sizeof(ShowProfilePacket) == 40, "size of ShowProfilePacket should be 80 or 48(default)");
static_assert(sizeof(SetDefaultGameTypePacket) == 0x30 || sizeof(SetDefaultGameTypePacket) == 40, "size of SetDefaultGameTypePacket should be 56 or 48(default)");
static_assert(sizeof(RemoveObjectivePacket) == 0x48 || sizeof(RemoveObjectivePacket) == 40, "size of RemoveObjectivePacket should be 80 or 48(default)");
static_assert(sizeof(SetDisplayObjectivePacket) == 0xB0 || sizeof(SetDisplayObjectivePacket) == 40, "size of SetDisplayObjectivePacket should be 184 or 48(default)");
static_assert(sizeof(SetScorePacket) == 0x48 || sizeof(SetScorePacket) == 40, "size of SetScorePacket should be 80 or 48(default)");
static_assert(sizeof(LabTablePacket) == 0x40 || sizeof(LabTablePacket) == 40, "size of LabTablePacket should be 72 or 48(default)");
static_assert(sizeof(UpdateBlockSyncedPacket) == 0x50 || sizeof(UpdateBlockSyncedPacket) == 40, "size of UpdateBlockSyncedPacket should be 88 or 48(default)");
static_assert(sizeof(MoveActorDeltaPacket) == 0x68 || sizeof(MoveActorDeltaPacket) == 40, "size of MoveActorDeltaPacket should be 112 or 48(default)");
static_assert(sizeof(SetScoreboardIdentityPacket) == 0x48 || sizeof(SetScoreboardIdentityPacket) == 40, "size of SetScoreboardIdentityPacket should be 80 or 48(default)");
static_assert(sizeof(SetLocalPlayerAsInitializedPacket) == 0x30 || sizeof(SetLocalPlayerAsInitializedPacket) == 40, "size of SetLocalPlayerAsInitializedPacket should be 56 or 48(default)");
static_assert(sizeof(UpdateSoftEnumPacket) == 0x68 || sizeof(UpdateSoftEnumPacket) == 40, "size of UpdateSoftEnumPacket should be 112 or 48(default)");
static_assert(sizeof(NetworkStackLatencyPacket) == 0x38 || sizeof(NetworkStackLatencyPacket) == 40, "size of NetworkStackLatencyPacket should be 64 or 48(default)");
static_assert(sizeof(ScriptCustomEventPacket) == 0x58 || sizeof(ScriptCustomEventPacket) == 40, "size of ScriptCustomEventPacket should be 96 or 48(default)");
static_assert(sizeof(SpawnParticleEffectPacket) == 0xA8 || sizeof(SpawnParticleEffectPacket) == 40, "size of SpawnParticleEffectPacket should be 176 or 48(default)");
static_assert(sizeof(AvailableActorIdentifiersPacket) == 0x40 || sizeof(AvailableActorIdentifiersPacket) == 40, "size of AvailableActorIdentifiersPacket should be 72 or 48(default)");
static_assert(sizeof(LevelSoundEventPacketV2) == 0x68 || sizeof(LevelSoundEventPacketV2) == 40, "size of LevelSoundEventPacketV2 should be 112 or 48(default)");
static_assert(sizeof(NetworkChunkPublisherUpdatePacket) == 0x50 || sizeof(NetworkChunkPublisherUpdatePacket) == 40, "size of NetworkChunkPublisherUpdatePacket should be 88 or 48(default)");
static_assert(sizeof(BiomeDefinitionListPacket) == 0x40 || sizeof(BiomeDefinitionListPacket) == 40, "size of BiomeDefinitionListPacket should be 72 or 48(default)");
static_assert(sizeof(LevelSoundEventPacket) == 0x68 || sizeof(LevelSoundEventPacket) == 40, "size of LevelSoundEventPacket should be 112 or 48(default)");
static_assert(sizeof(LevelEventGenericPacket) == 0x38 || sizeof(LevelEventGenericPacket) == 40, "size of LevelEventGenericPacket should be 64 or 48(default)");
static_assert(sizeof(LecternUpdatePacket) == 0x40 || sizeof(LecternUpdatePacket) == 40, "size of LecternUpdatePacket should be 72 or 48(default)");
static_assert(sizeof(AddEntityPacket) == 0x30 || sizeof(AddEntityPacket) == 40, "size of AddEntityPacket should be 56 or 48(default)");
static_assert(sizeof(RemoveEntityPacket) == 0x30 || sizeof(RemoveEntityPacket) == 40, "size of RemoveEntityPacket should be 56 or 48(default)");
static_assert(sizeof(ClientCacheStatusPacket) == 0x30 || sizeof(ClientCacheStatusPacket) == 40, "size of ClientCacheStatusPacket should be 56 or 48(default)");
static_assert(sizeof(OnScreenTextureAnimationPacket) == 0x30 || sizeof(OnScreenTextureAnimationPacket) == 40, "size of OnScreenTextureAnimationPacket should be 56 or 48(default)");
static_assert(sizeof(MapCreateLockedCopyPacket) == 0x38 || sizeof(MapCreateLockedCopyPacket) == 40, "size of MapCreateLockedCopyPacket should be 64 or 48(default)");
static_assert(sizeof(StructureTemplateDataRequestPacket) == 0xC8 || sizeof(StructureTemplateDataRequestPacket) == 40, "size of StructureTemplateDataRequestPacket should be 208 or 48(default)");
static_assert(sizeof(StructureTemplateDataResponsePacket) == 0x58 || sizeof(StructureTemplateDataResponsePacket) == 40, "size of StructureTemplateDataResponsePacket should be 96 or 48(default)");
static_assert(sizeof(ClientCacheBlobStatusPacket) == 0x58 || sizeof(ClientCacheBlobStatusPacket) == 40, "size of ClientCacheBlobStatusPacket should be 96 or 48(default)");
static_assert(sizeof(ClientCacheMissResponsePacket) == 0x80 || sizeof(ClientCacheMissResponsePacket) == 40, "size of ClientCacheMissResponsePacket should be 136 or 48(default)");
static_assert(sizeof(EducationSettingsPacket) == 0x170 || sizeof(EducationSettingsPacket) == 40, "size of EducationSettingsPacket should be 376 or 48(default)");
static_assert(sizeof(EmotePacket) == 0x58 || sizeof(EmotePacket) == 40, "size of EmotePacket should be 96 or 48(default)");
static_assert(sizeof(MultiplayerSettingsPacket) == 0x30 || sizeof(MultiplayerSettingsPacket) == 40, "size of MultiplayerSettingsPacket should be 56 or 48(default)");
static_assert(sizeof(SettingsCommandPacket) == 0x50 || sizeof(SettingsCommandPacket) == 40, "size of SettingsCommandPacket should be 88 or 48(default)");
static_assert(sizeof(AnvilDamagePacket) == 0x28 || sizeof(AnvilDamagePacket) == 40, "size of AnvilDamagePacket should be 64 or 48(default)");
static_assert(sizeof(CompletedUsingItemPacket) == 0x30 || sizeof(CompletedUsingItemPacket) == 40, "size of CompletedUsingItemPacket should be 56 or 48(default)");
static_assert(sizeof(NetworkSettingsPacket) == 0x30 || sizeof(NetworkSettingsPacket) == 40, "size of NetworkSettingsPacket should be 56 or 48(default)");
static_assert(sizeof(PlayerAuthInputPacket) == 0xA8 || sizeof(PlayerAuthInputPacket) == 40, "size of PlayerAuthInputPacket should be 176 or 48(default)");
static_assert(sizeof(CreativeContentPacket) == 0x48 || sizeof(CreativeContentPacket) == 40, "size of CreativeContentPacket should be 80 or 48(default)");
static_assert(sizeof(PlayerEnchantOptionsPacket) == 0x40 || sizeof(PlayerEnchantOptionsPacket) == 40, "size of PlayerEnchantOptionsPacket should be 72 or 48(default)");
static_assert(sizeof(ItemStackRequestPacket) == 0x30 || sizeof(ItemStackRequestPacket) == 40, "size of ItemStackRequestPacket should be 56 or 48(default)");
static_assert(sizeof(ItemStackResponsePacket) == 0x40 || sizeof(ItemStackResponsePacket) == 40, "size of ItemStackResponsePacket should be 72 or 48(default)");
static_assert(sizeof(PlayerArmorDamagePacket) == 0x28 || sizeof(PlayerArmorDamagePacket) == 40, "size of PlayerArmorDamagePacket should be 64 or 48(default)");
static_assert(sizeof(CodeBuilderPacket) == 0x50 || sizeof(CodeBuilderPacket) == 40, "size of CodeBuilderPacket should be 88 or 48(default)");
static_assert(sizeof(UpdatePlayerGameTypePacket) == 0x38 || sizeof(UpdatePlayerGameTypePacket) == 40, "size of UpdatePlayerGameTypePacket should be 64 or 48(default)");
static_assert(sizeof(EmoteListPacket) == 0x48 || sizeof(EmoteListPacket) == 40, "size of EmoteListPacket should be 80 or 48(default)");
static_assert(sizeof(PositionTrackingDBServerBroadcastPacket) == 0x48 || sizeof(PositionTrackingDBServerBroadcastPacket) == 40, "size of PositionTrackingDBServerBroadcastPacket should be 80 or 48(default)");
static_assert(sizeof(PositionTrackingDBClientRequestPacket) == 0x30 || sizeof(PositionTrackingDBClientRequestPacket) == 40, "size of PositionTrackingDBClientRequestPacket should be 56 or 48(default)");
static_assert(sizeof(DebugInfoPacket) == 0x50 || sizeof(DebugInfoPacket) == 40, "size of DebugInfoPacket should be 88 or 48(default)");
static_assert(sizeof(PacketViolationWarningPacket) == 0x58 || sizeof(PacketViolationWarningPacket) == 40, "size of PacketViolationWarningPacket should be 96 or 48(default)");
// static_assert(sizeof(MotionPredictionHintsPacket) == 0x48 || sizeof(MotionPredictionHintsPacket) == 48, "size of MotionPredictionHintsPacket should be 72 or 48(default)");
// static_assert(sizeof(AnimateEntityPacket) == 0xD8 || sizeof(AnimateEntityPacket) == 48, "size of AnimateEntityPacket should be 216 or 48(default)");
// static_assert(sizeof(CameraShakePacket) == 0x40 || sizeof(CameraShakePacket) == 48, "size of CameraShakePacket should be 64 or 48(default)");
// static_assert(sizeof(PlayerFogPacket) == 0x48 || sizeof(PlayerFogPacket) == 48, "size of PlayerFogPacket should be 72 or 48(default)");
// static_assert(sizeof(CorrectPlayerMovePredictionPacket) == 0x58 || sizeof(CorrectPlayerMovePredictionPacket) == 48, "size of CorrectPlayerMovePredictionPacket should be 88 or 48(default)");
// static_assert(sizeof(ItemComponentPacket) == 0x48 || sizeof(ItemComponentPacket) == 48, "size of ItemComponentPacket should be 72 or 48(default)");
// static_assert(sizeof(FilterTextPacket) == 0x58 || sizeof(FilterTextPacket) == 48, "size of FilterTextPacket should be 88 or 48(default)");
// static_assert(sizeof(ClientboundDebugRendererPacket) == 0x88 || sizeof(ClientboundDebugRendererPacket) == 48, "size of ClientboundDebugRendererPacket should be 136 or 48(default)");
// static_assert(sizeof(SyncActorPropertyPacket) == 0x48 || sizeof(SyncActorPropertyPacket) == 48, "size of SyncActorPropertyPacket should be 72 or 48(default)");
// static_assert(sizeof(AddVolumeEntityPacket) == 0x120 || sizeof(AddVolumeEntityPacket) == 48, "size of AddVolumeEntityPacket should be 288 or 48(default)");
// static_assert(sizeof(RemoveVolumeEntityPacket) == 0x40 || sizeof(RemoveVolumeEntityPacket) == 48, "size of RemoveVolumeEntityPacket should be 64 or 48(default)");
// static_assert(sizeof(SimulationTypePacket) == 0x38 || sizeof(SimulationTypePacket) == 48, "size of SimulationTypePacket should be 56 or 48(default)");
// static_assert(sizeof(NpcDialoguePacket) == 0xC0 || sizeof(NpcDialoguePacket) == 48, "size of NpcDialoguePacket should be 192 or 48(default)");
// static_assert(sizeof(EduUriResourcePacket) == 0x70 || sizeof(EduUriResourcePacket) == 48, "size of EduUriResourcePacket should be 112 or 48(default)");
// static_assert(sizeof(CreatePhotoPacket) == 0x78 || sizeof(CreatePhotoPacket) == 48, "size of CreatePhotoPacket should be 120 or 48(default)");
// static_assert(sizeof(UpdateSubChunkBlocksPacket) == 0x70 || sizeof(UpdateSubChunkBlocksPacket) == 48, "size of UpdateSubChunkBlocksPacket should be 112 or 48(default)");
// static_assert(sizeof(SubChunkPacket) == 0x60 || sizeof(SubChunkPacket) == 48, "size of SubChunkPacket should be 96 or 48(default)");
// static_assert(sizeof(SubChunkRequestPacket) == 0x80 || sizeof(SubChunkRequestPacket) == 48, "size of SubChunkRequestPacket should be 128 or 48(default)");
// static_assert(sizeof(PlayerStartItemCooldownPacket) == 0x58 || sizeof(PlayerStartItemCooldownPacket) == 48, "size of PlayerStartItemCooldownPacket should be 88 or 48(default)");
// static_assert(sizeof(ScriptMessagePacket) == 0x70 || sizeof(ScriptMessagePacket) == 48, "size of ScriptMessagePacket should be 112 or 48(default)");
// static_assert(sizeof(CodeBuilderSourcePacket) == 0x58 || sizeof(CodeBuilderSourcePacket) == 48, "size of CodeBuilderSourcePacket should be 88 or 48(default)");
// static_assert(sizeof(TickingAreasLoadStatusPacket) == 0x38 || sizeof(TickingAreasLoadStatusPacket) == 48, "size of TickingAreasLoadStatusPacket should be 56 or 48(default)");
// static_assert(sizeof(DimensionDataPacket) == 0x40 || sizeof(DimensionDataPacket) == 48, "size of DimensionDataPacket should be 64 or 48(default)");
// static_assert(sizeof(AgentActionEventPacket) == 0x68 || sizeof(AgentActionEventPacket) == 48, "size of AgentActionEventPacket should be 104 or 48(default)");
// static_assert(sizeof(ChangeMobPropertyPacket) == 0x88 || sizeof(ChangeMobPropertyPacket) == 48, "size of ChangeMobPropertyPacket should be 136 or 48(default)");
// static_assert(sizeof(LessonProgressPacket) == 0x58 || sizeof(LessonProgressPacket) == 48, "size of LessonProgressPacket should be 88 or 48(default)");
// static_assert(sizeof(RequestAbilityPacket) == 0x40 || sizeof(RequestAbilityPacket) == 48, "size of RequestAbilityPacket should be 64 or 48(default)");
// static_assert(sizeof(RequestPermissionsPacket) == 0x40 || sizeof(RequestPermissionsPacket) == 48, "size of RequestPermissionsPacket should be 64 or 48(default)");
// static_assert(sizeof(ToastRequestPacket) == 0x70 || sizeof(ToastRequestPacket) == 48, "size of ToastRequestPacket should be 112 or 48(default)");
// static_assert(sizeof(UpdateAbilitiesPacket) == 0x58 || sizeof(UpdateAbilitiesPacket) == 48, "size of UpdateAbilitiesPacket should be 88 or 48(default)");
// static_assert(sizeof(UpdateAdventureSettingsPacket) == 0x38 || sizeof(UpdateAdventureSettingsPacket) == 48, "size of UpdateAdventureSettingsPacket should be 56 or 48(default)");
// static_assert(sizeof(DeathInfoPacket) == 0x68 || sizeof(DeathInfoPacket) == 48, "size of DeathInfoPacket should be 104 or 48(default)");
// static_assert(sizeof(EditorNetworkPacket) == 0x48 || sizeof(EditorNetworkPacket) == 48, "size of EditorNetworkPacket should be 72 or 48(default)");
// static_assert(sizeof(FeatureRegistryPacket) == 0x48 || sizeof(FeatureRegistryPacket) == 48, "size of FeatureRegistryPacket should be 72 or 48(default)");

#endif // SIZE_STATIC_ASSERT_IF_DEFINE