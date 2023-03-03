// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "MobEffectInstance.hpp"
#include "Tick.hpp"
#include "ActorDamageSource.hpp"
#include "SimpleContainer.hpp"
#include "ActorDefinitionIdentifier.hpp"
#include "OwnerStorageEntity.hpp"
#include "ActorDefinitionGroup.hpp"
#include "ActorDefinitionDescriptor.hpp"
#include "RopeSystem.hpp"
#include "SynchedActorData.hpp"
#include "SpatialActorNetworkData.hpp"
#include "BaseAttributeMap.hpp"
#include "EconomyTradeableComponent.hpp"
#include "Dimension.hpp"
#include "AnimationComponent.hpp"
#include "ActorDefinitionDiffList.hpp"
#include "ActorTerrainInterlockData.hpp"
#include "MolangVariableMap.hpp"
#include "AnimationComponent.hpp"
#include "CompoundTag.hpp"

template <typename T>
class  OwnerPtrT : OwnerStorageEntity {
};

const class VariantParameterList
{
    struct Parameter {
        unsigned __int64 type;
        void* data;
    };

private:
    VariantParameterList::Parameter parameters[8];
};
class PredictedMovementComponent {
public:
    class PredictedMovementComponent& operator=(class PredictedMovementComponent const&) = delete;
    PredictedMovementComponent(class PredictedMovementComponent const&) = delete;
    PredictedMovementComponent() = delete;
};

class PredictedMovementValues {
public:
    bool mUseAggressiveTickInterval;
    unsigned __int64 mInterpolationWindowSizeInTicks;

    class PredictedMovementValues& operator=(class PredictedMovementValues const&) = delete;
    PredictedMovementValues(class PredictedMovementValues const&) = delete;
    PredictedMovementValues() = delete;
};

class Actor;
class Player;
class NetworkIdentifier;
class CompoundTag;
class Vec2;
class BlockInstance;
class ItemStack;
class BlockSource;
enum class FaceID : char;
enum ActorFlags : int{
    Unknown_25 = -1,
    ONFIRE = 0x0,
    SNEAKING = 0x1,
    RIDING = 0x2,
    SPRINTING = 0x3,
    USINGITEM = 0x4,
    INVISIBLE = 0x5,
    TEMPTED = 0x6,
    INLOVE = 0x7,
    SADDLED = 0x8,
    POWERED = 0x9,
    IGNITED = 0xA,
    BABY = 0xB,
    CONVERTING = 0xC,
    CRITICAL = 0xD,
    CAN_SHOW_NAME = 0xE,
    ALWAYS_SHOW_NAME = 0xF,
    NOAI = 0x10,
    SILENT = 0x11,
    WALLCLIMBING = 0x12,
    CANCLIMB = 0x13,
    CANSWIM = 0x14,
    CANFLY = 0x15,
    CANWALK = 0x16,
    RESTING = 0x17,
    SITTING = 0x18,
    ANGRY = 0x19,
    INTERESTED = 0x1A,
    CHARGED = 0x1B,
    TAMED = 0x1C,
    ORPHANED = 0x1D,
    LEASHED = 0x1E,
    SHEARED = 0x1F,
    GLIDING = 0x20,
    ELDER = 0x21,
    MOVING = 0x22,
    BREATHING = 0x23,
    CHESTED = 0x24,
    STACKABLE = 0x25,
    SHOW_BOTTOM = 0x26,
    STANDING = 0x27,
    SHAKING = 0x28,
    IDLING = 0x29,
    CASTING = 0x2A,
    CHARGING = 0x2B,
    WASD_CONTROLLED = 0x2C,
    CAN_POWER_JUMP = 0x2D,
    LINGERING = 0x2E,
    HAS_COLLISION = 0x2F,
    HAS_GRAVITY = 0x30,
    FIRE_IMMUNE = 0x31,
    DANCING = 0x32,
    ENCHANTED = 0x33,
    RETURNTRIDENT = 0x34,
    CONTAINER_IS_PRIVATE = 0x35,
    IS_TRANSFORMING = 0x36,
    DAMAGENEARBYMOBS = 0x37,
    SWIMMING = 0x38,
    BRIBED = 0x39,
    IS_PREGNANT = 0x3A,
    LAYING_EGG = 0x3B,
    RIDER_CAN_PICK = 0x3C,
    TRANSITION_SITTING = 0x3D,
    EATING = 0x3E,
    LAYING_DOWN = 0x3F,
    SNEEZING = 0x40,
    TRUSTING = 0x41,
    ROLLING = 0x42,
    SCARED = 0x43,
    IN_SCAFFOLDING = 0x44,
    OVER_SCAFFOLDING = 0x45,
    FALL_THROUGH_SCAFFOLDING = 0x46,
    BLOCKING = 0x47,
    TRANSITION_BLOCKING = 0x48,
    BLOCKED_USING_SHIELD = 0x49,
    BLOCKED_USING_DAMAGED_SHIELD = 0x4A,
    SLEEPING = 0x4B,
    WANTS_TO_WAKE = 0x4C,
    TRADE_INTEREST = 0x4D,
    DOOR_BREAKER = 0x4E,
    BREAKING_OBSTRUCTION = 0x4F,
    DOOR_OPENER = 0x50,
    IS_ILLAGER_CAPTAIN = 0x51,
    STUNNED = 0x52,
    ROARING = 0x53,
    DELAYED_ATTACK = 0x54,
    IS_AVOIDING_MOBS = 0x55,
    FACING_TARGET_TO_RANGE_ATTACK = 0x56,
    HIDDEN_WHEN_INVISIBLE = 0x57,
    IS_IN_UI = 0x58,
    STALKING = 0x59,
    EMOTING = 0x5A,
    CELEBRATING = 0x5B,
    Count_7 = 0x5C,
};
enum class FocusImpact : __int8 {
    Neutral = 0x0,
    ActivateFocus = 0x1,
    DeactivateFocus = 0x2,
};

class _declspec(align(4)) ActionEvent {
    int mActionId;
    enum class ActionState : int {
        Start = 0x1,
        Stop = 0x2,
    } mActionState;

    bool mIsExclusive;
    FocusImpact mFocusImpact;
};


const struct AABBShapeComponent {
public:
    AABB mAABB;
    Vec2 mBBDim;
};

const struct StateVectorComponent {
public:
    Vec3 mPos;
    Vec3 mPosPrev;
    Vec3 mPosDelta;
};

struct ActionQueue {
    std::deque<ActionEvent> mQueue;
};
#undef BEFORE_EXTRA

class Actor {
public:
    OwnerPtrT<EntityRefTraits> mEntity;
    enum class InitializationMethod : unsigned char {
        INVALID = 0x0,
        LOADED = 0x1,
        SPAWNED = 0x2,
        BORN = 0x3,
        TRANSFORMED = 0x4,
        UPDATED = 0x5,
        EVENT = 0x6,
        LEGACY = 0x7,
    } mInitMethod;
    std::string mCustomInitEventName;
    VariantParameterList mInitParams;
    bool mForceInitMethodToSpawnOnReload;
    AutomaticID<Dimension, int> mDimensionId;
    bool mAdded;
    ActorDefinitionGroup* mDefinitions;
    std::unique_ptr<ActorDefinitionDescriptor> mCurrentDescription;
    ActorUniqueID mUniqueID;
    std::shared_ptr<RopeSystem> mLeashRopeSystem;
    Vec2 mRot;//256
    Vec2 mRotPrev;
    float mSwimAmount;
    float mSwimPrev;
    ChunkPos mChunkPos;
    Vec3 mRenderPos;
    Vec2 mRenderRot;
    int mCategories;
    int mAmbientSoundTime;
    int mLastHurtByPlayerTime;
    SynchedActorData mEntityData;
    std::unique_ptr<SpatialActorNetworkData> mNetworkData;
    Vec3 mSentDelta;
    bool mSentOnGround;
    float mScale;
    float mScalePrev;
    unsigned __int64 mNameTagHash;
    const Block* mInsideBlock;
    BlockPos mInsideBlockPos;
    float mFallDistance;
    bool mOnGround; //416
    bool mWasOnGround;
    bool mHorizontalCollision;
    bool mVerticalCollision;
    bool mCollision;
    bool mIgnoreLighting;
    bool mFilterLighting;
    mce::Color mTintColor;
    mce::Color mTintColor2;
    float mStepSoundVolume;
    float mStepSoundPitch;
    AABB* mLastHitBB;
    std::vector<AABB> mSubBBs;
    float mTerrainSurfaceOffset;
    float mHeightOffset;
    float mExplosionOffset;
    float mShadowOffset;
    float mMaxAutoStep;
    float mPushthrough;
    float mWalkDistPrev;
    float mWalkDist;
    float mMoveDist;
    float mBlockMovementSlowdownMultiplier;
    float mNextStep;
    bool mImmobile;
    bool mWasInWater;
    bool mHasEnteredWater;
    bool mHeadInWater;
    bool mIsWet;
    Vec2 mSlideOffset;
    Vec3 mHeadOffset;
    Vec3 mEyeOffset;
    Vec3 mBreathingOffset;
    Vec3 mMouthOffset;
    Vec3 mDropOffset;
    bool mFirstTick;
    int mTickCount;
    int mInvulnerableTime;
    int mLastHealth;
    bool mFallDamageImmune;
    bool mHurtMarked;
    bool mWasHurtLastFrame;
    bool mInvulnerable;
    int mOnFire;//636
    int mFlameTexFrameIndex;
    int mClientSideFireTransitionStartTick;
    float mFlameFrameIncrementTime;
    bool mOnHotBlock;
    bool mClientSideFireTransitionLatch;
    bool mAlwaysFireImmune;
    int mPortalCooldown;
    BlockPos mPortalBlockPos;
    uint8_t mPortalEntranceAxis[4];
    int mInsidePortalTime;
    std::vector<ActorUniqueID> mRiderIDs;
    std::vector<ActorUniqueID> mRiderIDsToRemove;
    ActorUniqueID mRidingID;
    ActorUniqueID mRidingPrevID;
    ActorUniqueID mPushedByID;
    bool mInheritRotationWhenRiding;
    bool mRidersChanged;
    bool mBlocksBuilding;
    bool mUsesOneWayCollision;
    bool mForcedLoading;
    bool mPrevPosRotSetThisTick;
    bool mTeleportedThisTick;
    bool mForceSendMotionPacket;
    float mSoundVolume;
    int mShakeTime;
    float mWalkAnimSpeedMultiplier;
    float mWalkAnimSpeedO;
    float mWalkAnimSpeed;
    float mWalkAnimPos;
    ActorUniqueID mLegacyUniqueID;
    bool mHighlightedThisFrame;
    bool mInitialized;
    BlockSource* mRegion;
    Dimension* mDimension;
    Level* mLevel;//816
    HashedString mActorRendererId;
    HashedString mActorRendererIdThatAnimationComponentWasInitializedWith;
    bool mChanged;
    bool mRemoved;
    bool mGlobal;
    bool mAutonomous;
    ActorType mActorType;
    ActorDefinitionIdentifier mActorIdentifier;
    std::unique_ptr<BaseAttributeMap> mAttributes;
    std::unique_ptr<EconomyTradeableComponent> mEconomyTradeableComponent;
    std::shared_ptr<AnimationComponent> mAnimationComponent;
    AABBShapeComponent mAABBComponent;
    StateVectorComponent mStateVectorComponent;
    ActorUniqueID mTargetId;
    float mRestrictRadius;
    BlockPos mRestrictCenter;
    ActorUniqueID mInLovePartner;
    std::vector<MobEffectInstance> mMobEffects;
    bool mEffectsDirty;
    bool mLootDropped;
    bool mPersistingTrade;
    std::unique_ptr<CompoundTag> mPersistingTradeOffers;
    int mPersistingTradeRiches;
    ActorRuntimeID mRuntimeID;
    mce::Color mHurtColor;
    std::unique_ptr<ActorDefinitionDiffList> mDefinitionList;
    bool mIsMovedByScript;
    bool mHasLimitedLife;
    int mLimitedLifeTicks;
    int mForceVisibleTimerTicks;
    float mRidingExitDistance;
    std::string mFilteredNameTag;
    bool mIsSafeToSleepNear;
    bool mIsStuckItem;
    ActorTerrainInterlockData mTerrainInterlockData;
    float mArmorDropChance[4];
    float mHandDropChance[2];
    std::unique_ptr<SimpleContainer> mArmor;//1400
    std::unique_ptr<SimpleContainer> mHand;
    bool mIsKnockedBackOnDeath;
    std::vector<AABB> mOnewayPhysicsBlocks;
    bool mStuckInCollider;
    bool mPenetratingLastFrame;
    bool mCollidableMobNear;
    bool mCollidableMob;
    bool mCanPickupItems;
    bool mChainedDamageEffects;
    bool mWasInBubbleColumn;
    bool mWasInWallLastTick;
    int mTicksInWall;
    int mDamageNearbyMobsTick;
    enum class SpawnRuleEnum : int {
        Undefined = 0xFF,
        NoSpawnRules = 0x0,
        HasSpawnRules = 0x1,
    } mSpawnRulesEnum;
    std::unique_ptr<ActionQueue> mActionQueue;
    MolangVariableMap mMolangVariables;
    CompoundTag mCachedComponentData;
    ActorUniqueID mFishingHookID;

#define AFTER_EXTRA
public:
//    enum InitializationMethod;

    LIAPI std::string getTypeName() const;
    LIAPI Vec3 getFeetPosition() const;
    LIAPI BlockSource* getBlockSource() const;
    LIAPI Vec2* getDirection() const;
    LIAPI ActorUniqueID getActorUniqueId() const;
    LIAPI Vec3 getCameraPos() const;
    LIAPI Tick* getLastTick() const;
    LIAPI std::vector<std::string> getAllTags();
    //LIAPI BlockInstance getBlockFromViewVector(bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false) const;
    //LIAPI BlockInstance getBlockFromViewVector(FaceID& face, bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false) const;
    //LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent() const;
    LIAPI Actor* getActorFromViewVector(float maxDistance);
    LIAPI BlockPos getBlockPos();
    LIAPI BlockInstance getBlockStandingOn() const;

    LIAPI bool isPlayer(bool allowSimulatedPlayer = true) const;
    LIAPI bool isItemActor() const;
    LIAPI bool isOnGround() const;
    //LIAPI bool setOnFire(int time, bool isEffect);
    //LIAPI bool stopFire();
    LIAPI bool hasTag(const string& tag);
    LIAPI bool hurtEntity(float damage, ActorDamageCause damageCause = ActorDamageCause::ActorDamageCause_Override);
    LIAPI bool teleport(Vec3 to, int dimID, float x, float y);
    LIAPI bool teleport(Vec3 pos,int dimid);
    LIAPI ItemStack* getHandSlot();
    LIAPI bool rename(const string& name);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshActorData();
    LIAPI bool addEffect(MobEffect::EffectType type, int tick, int level, bool ambient = false, bool showParticles = true, bool showAnimation = false);
//    LIAPI float quickEvalMolangScript(const string& expression);
    //LIAPI Json::Value quickEvalMolangScriptAsJson(const string& expression);
    LIAPI SimpleContainer & getHandContainer();
    LIAPI SimpleContainer & getArmorContainer();

    inline const Vec3 &getPosition()const
    {
        return getPos();
    }
    inline Vec3 getPosPrev()
    {
        return getPosOld();
    }
    inline BlockSource const & getRegionConst() const{
        // return dAccess<BlockSource>(this,100);
        return *mRegion;
    };
    inline bool isMoving() const{
        return getStatusFlag(ActorFlags::MOVING);
    };
    inline bool hasCategory(enum ActorCategory actorCategory) const{
        // IDA Player::take Line123
        // return (dAccess<ActorCategory>(this, 316) & actorCategory) !=0;
        return mCategories != 0;
    };
    inline BlockSource & getRegion() {
        // VanillaServerGameplayEventListener::onBlockPlacedByPlayer Line35
        // return dAccess<BlockSource>(this,100);
        return *mRegion;
    };
    inline AABB const & getAABB() const{
        //FollowMobGoal::_setWantedMob Line52
        //return dAccess<AABB>(this,1112);
        return mAABBComponent.mAABB;
    };
    inline bool isDancing(){
        return getStatusFlag(ActorFlags::DANCING);
    };
    inline bool isTrading(){
        return getTradingPlayer() != nullptr;
    };

    inline Vec2 getRotation() const{
        // Actor::getMapDecorationRotation
        //return dAccess<Vec2>(this, 65);
        return mRot;
    };
    ActorDefinitionIdentifier getActorIdentifier() const{
        //ServerPlayer::handleActorPickRequestOnServer Line144 1048-128-8 = 912;
        //return dAccess<ActorDefinitionIdentifier>(this, 912);
        return mActorIdentifier;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOR
public:
    class Actor& operator=(class Actor const &) = delete;
    Actor(class Actor const &) = delete;
    Actor() = delete;
#endif

public:
    /*0*/ virtual bool hasComponent(class HashedString const &) const;
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*2*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*3*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*4*/ virtual void reloadComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*5*/ virtual void _serverInitItemStackIds();
    /*6*/ virtual void _doInitialMove();
    /*7*/ virtual ~Actor();
    /*8*/ virtual void reset();
    /*9*/ virtual int getOnDeathExperience();
    /*10*/ virtual enum ActorType getOwnerEntityType();
    /*11*/ virtual void remove();
    /*12*/ virtual void setPos(class Vec3 const &);
    /*13*/ virtual class Vec3 const & getPos() const;
    /*14*/ virtual class Vec3 const & getPosOld() const;
    /*15*/ virtual class Vec3 const getPosExtrapolated(float) const;
    /*16*/ virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    /*17*/ virtual class Vec3 getFiringPos() const;
    /*18*/ virtual void setRot(class Vec2 const &);
    /*19*/ virtual void move(class Vec3 const &);
    /*20*/ virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /*21*/ virtual float getInterpolatedBodyRot(float) const;
    /*22*/ virtual float getInterpolatedHeadRot(float) const;
    /*23*/ virtual float getInterpolatedBodyYaw(float) const;
    /*24*/ virtual float getYawSpeedInDegreesPerSecond() const;
    /*25*/ virtual float getInterpolatedWalkAnimSpeed(float) const;
    /*26*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*27*/ virtual void checkBlockCollisions(class AABB const &);
    /*28*/ virtual void checkBlockCollisions();
    /*29*/ virtual bool isFireImmune() const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /*32*/ virtual void moveRelative(float, float, float, float);
    /*33*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*34*/ virtual bool tryTeleportTo(class Vec3 const &, bool, bool, int, int);
    /*35*/ virtual void chorusFruitTeleport(class Vec3 &);
    /*36*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*37*/ virtual void lerpMotion(class Vec3 const &);
    /*38*/ virtual std::unique_ptr<class AddActorBasePacket> getAddPacket();
    /*39*/ virtual void normalTick();
    /*40*/ virtual void baseTick();
    /*41*/ virtual void rideTick();
    /*42*/ virtual void positionRider(class Actor &, float);
    /*43*/ virtual float getRidingHeight();
    /*44*/ virtual bool startRiding(class Actor &);
    /*45*/ virtual void addRider(class Actor &);
    /*46*/ virtual void flagRiderToRemove(class Actor &);
    /*47*/ virtual std::string getExitTip(std::string const &, enum InputMode) const;
    /*48*/ virtual bool intersects(class Vec3 const &, class Vec3 const &) const;
    /*49*/ virtual bool isFree(class Vec3 const &, float);
    /*50*/ virtual bool isFree(class Vec3 const &);
    /*51*/ virtual bool isInWall() const;
    /*52*/ virtual bool isInvisible() const;
    /*53*/ virtual bool canShowNameTag() const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void setNameTagVisible(bool);
    /*56*/ virtual std::string const & getNameTag() const;
    /*57*/ virtual unsigned __int64 getNameTagAsHash() const;
    /*58*/ virtual std::string getFormattedNameTag() const;
    /*59*/ virtual void filterFormattedNameTag(class UIProfanityContext const &);
    /*60*/ virtual void setNameTag(std::string const &);
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void setScoreTag(std::string const &);
    /*63*/ virtual std::string const & getScoreTag() const;
    /*64*/ virtual bool isInWater() const;
    /*65*/ virtual bool hasEnteredWater() const;
    /*66*/ virtual bool isImmersedInWater() const;
    /*67*/ virtual bool isInWaterOrRain() const;
    /*68*/ virtual bool isInLava() const;
    /*69*/ virtual bool isUnderLiquid(enum MaterialType) const;
    /*70*/ virtual bool isOverWater() const;
    /*71*/ virtual void makeStuckInBlock(float);
    /*72*/ virtual float getCameraOffset() const;
    /*73*/ virtual float getShadowHeightOffs();
    /*74*/ virtual float getShadowRadius() const;
    /*75*/ virtual class Vec3 getHeadLookVector(float);
    /*76*/ virtual void __unk_vfn_76();
    /*77*/ virtual bool canSee(class Actor const &) const;
    /*78*/ virtual bool canSee(class Vec3 const &) const;
    /*79*/ virtual bool isSkyLit(float);
    /*80*/ virtual float getBrightness(float) const;
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void playerTouch(class Player &);
    /*83*/ virtual void onAboveBubbleColumn(bool);
    /*84*/ virtual void onInsideBubbleColumn(bool);
    /*85*/ virtual bool isImmobile() const;
    /*86*/ virtual bool isSilent();
    /*87*/ virtual bool isPickable();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual bool isSleeping() const;
    /*90*/ virtual void __unk_vfn_90();
    /*91*/ virtual bool isSneaking() const;
    /*92*/ virtual void setSneaking(bool);
    /*93*/ virtual bool isBlocking() const;
    /*94*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*95*/ virtual bool isAlive() const;
    /*96*/ virtual bool isOnFire() const;
    /*97*/ virtual bool isOnHotBlock() const;
    /*98*/ virtual void __unk_vfn_98();
    /*99*/ virtual bool isSurfaceMob() const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual bool canAttack(class Actor *, bool) const;
    /*102*/ virtual void setTarget(class Actor *);
    /*103*/ virtual class Actor * findAttackTarget();
    /*104*/ virtual bool isValidTarget(class Actor *) const;
    /*105*/ virtual bool attack(class Actor &);
    /*106*/ virtual void performRangedAttack(class Actor &, float);
    /*107*/ virtual void adjustDamageAmount(int &) const;
    /*108*/ virtual int getEquipmentCount() const;
    /*109*/ virtual void setOwner(struct ActorUniqueID);
    /*110*/ virtual void setSitting(bool);
    /*111*/ virtual void onTame();
    /*112*/ virtual void onFailedTame();
    /*113*/ virtual int getInventorySize() const;
    /*114*/ virtual int getEquipSlots() const;
    /*115*/ virtual int getChestSlots() const;
    /*116*/ virtual void setStanding(bool);
    /*117*/ virtual bool canPowerJump() const;
    /*118*/ virtual void setCanPowerJump(bool);
    /*119*/ virtual bool isJumping() const;
    /*120*/ virtual bool isEnchanted() const;
    /*121*/ virtual void __unk_vfn_121();
    /*122*/ virtual void rideLanded(class Vec3 const &, class Vec3 const &);
    /*123*/ virtual bool shouldRender() const;
    /*124*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*125*/ virtual enum ActorDamageCause getBlockDamageCause(class Block const &) const;
    /*126*/ virtual void actuallyHurt(int, class ActorDamageSource const &, bool);
    /*127*/ virtual void animateHurt();
    /*128*/ virtual bool doFireHurt(int);
    /*129*/ virtual void onLightningHit();
    /*130*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*131*/ virtual void feed(int);
    /*132*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*133*/ virtual float getPickRadius();
    /*134*/ virtual class HashedString const & getActorRendererId() const;
    /*135*/ virtual class ItemActor * spawnAtLocation(int, int);
    /*136*/ virtual class ItemActor * spawnAtLocation(int, int, float);
    /*137*/ virtual class ItemActor * spawnAtLocation(class Block const &, int);
    /*138*/ virtual class ItemActor * spawnAtLocation(class Block const &, int, float);
    /*139*/ virtual class ItemActor * spawnAtLocation(class ItemStack const &, float);
    /*140*/ virtual void despawn();
    /*141*/ virtual void killed(class Actor &);
    /*142*/ virtual void awardKillScore(class Actor &, int);
    /*143*/ virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /*144*/ virtual class ItemStack const & getArmor(enum ArmorSlot) const;
    /*145*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*146*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*147*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*148*/ virtual void setEquippedSlot(enum ArmorSlot, int, int);
    /*149*/ virtual void setEquippedSlot(enum ArmorSlot, class ItemStack const &);
    /*150*/ virtual class ItemStack const & getCarriedItem() const;
    /*151*/ virtual void setCarriedItem(class ItemStack const &);
    /*152*/ virtual void setOffhandSlot(class ItemStack const &);
    /*153*/ virtual class ItemStack const & getEquippedTotem() const;
    /*154*/ virtual bool consumeTotem();
    /*155*/ virtual bool save(class CompoundTag &);
    /*156*/ virtual void saveWithoutId(class CompoundTag &);
    /*157*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*158*/ virtual void loadLinks(class CompoundTag const &, std::vector<struct ActorLink> &, class DataLoadHelper &);
    /*159*/ virtual enum ActorType getEntityTypeId() const;
    /*160*/ virtual class HashedString const & queryEntityRenderer() const;
    /*161*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*162*/ virtual void setOnFire(int);
    /*163*/ virtual class AABB getHandleWaterAABB() const;
    /*164*/ virtual void handleInsidePortal(class BlockPos const &);
    /*165*/ virtual int getPortalCooldown() const;
    /*166*/ virtual int getPortalWaitTime() const;
    /*167*/ virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /*168*/ virtual bool canChangeDimensions() const;
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void changeDimension(class AutomaticID<class Dimension, int>, bool);
    /*171*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*172*/ virtual void checkFallDamage(float, bool);
    /*173*/ virtual void causeFallDamage(float);
    /*174*/ virtual void handleFallDistanceOnServer(float, bool);
    /*175*/ virtual void playSynchronizedSound(enum LevelSoundEvent, class Vec3 const &, class Block const &, bool);
    /*176*/ virtual void playSynchronizedSound(enum LevelSoundEvent, class Vec3 const &, int, bool);
    /*177*/ virtual void onSynchedDataUpdate(int);
    /*178*/ virtual bool canAddRider(class Actor &) const;
    /*179*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*180*/ virtual bool canBePulledIntoVehicle() const;
    /*181*/ virtual bool inCaravan() const;
    /*182*/ virtual void __unk_vfn_182();
    /*183*/ virtual void tickLeash();
    /*184*/ virtual void sendMotionPacketIfNeeded();
    /*185*/ virtual bool canSynchronizeNewEntity() const;
    /*186*/ virtual void stopRiding(bool, bool, bool);
    /*187*/ virtual void startSwimming();
    /*188*/ virtual void stopSwimming();
    /*189*/ virtual void buildDebugInfo(std::string &) const;
    /*190*/ virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    /*191*/ virtual class AttributeInstance * getMutableAttribute(class Attribute const &);
    /*192*/ virtual class AttributeInstance const & getAttribute(class Attribute const &) const;
    /*193*/ virtual int getDeathTime() const;
    /*194*/ virtual void heal(int);
    /*195*/ virtual bool isInvertedHealAndHarm() const;
    /*196*/ virtual bool canBeAffected(int) const;
    /*197*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*198*/ virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /*199*/ virtual void onEffectAdded(class MobEffectInstance &);
    /*200*/ virtual void onEffectUpdated(class MobEffectInstance const &);
    /*201*/ virtual void onEffectRemoved(class MobEffectInstance &);
    /*202*/ virtual class AnimationComponent & getAnimationComponent();
    /*203*/ virtual void openContainerComponent(class Player &);
    /*204*/ virtual void swing();
    /*205*/ virtual void useItem(class ItemStack &, enum ItemUseMethod, bool);
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ virtual void getDebugText(std::vector<std::string> &);
    /*209*/ virtual float getMapDecorationRotation() const;
    /*210*/ virtual float getRiderYRotation(class Actor const &) const;
    /*211*/ virtual float getYHeadRot() const;
    /*212*/ virtual bool isWorldBuilder();
    /*213*/ virtual bool isCreative() const;
    /*214*/ virtual bool isAdventure() const;
    /*215*/ virtual bool add(class ItemStack &);
    /*216*/ virtual bool drop(class ItemStack const &, bool);
    /*217*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*218*/ virtual bool canDestroyBlock(class Block const &) const;
    /*219*/ virtual void setAuxValue(int);
    /*220*/ virtual void setSize(float, float);
    /*221*/ virtual int getLifeSpan() const;
    /*222*/ virtual void onOrphan();
    /*223*/ virtual void wobble();
    /*224*/ virtual bool wasHurt();
    /*225*/ virtual void startSpinAttack();
    /*226*/ virtual void stopSpinAttack();
    /*227*/ virtual void setDamageNearbyMobs(bool);
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual void reloadLootTable();
    /*230*/ virtual void reloadLootTable(struct EquipmentTableDescription const *);
    /*231*/ virtual void __unk_vfn_231();
    /*232*/ virtual void kill();
    /*233*/ virtual void die(class ActorDamageSource const &);
    /*234*/ virtual bool shouldTick() const;
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*236*/ virtual bool shouldTryMakeStepSound();
    /*237*/ virtual float getNextStep(float);
    /*238*/ virtual void __unk_vfn_238();
    /*239*/ virtual void outOfWorld();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*241*/ virtual void markHurt();
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*244*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*245*/ virtual void _playFlySound(class BlockPos const &, class Block const &);
    /*246*/ virtual void __unk_vfn_246();
    /*247*/ virtual void checkInsideBlocks(float);
    /*248*/ virtual void pushOutOfBlocks(class Vec3 const &);
    /*249*/ virtual bool updateWaterState();
    /*250*/ virtual void doWaterSplashEffect();
    /*251*/ virtual void spawnTrailBubbles();
    /*252*/ virtual void updateInsideBlock();
    /*253*/ virtual class LootTable * getLootTable();
    /*254*/ virtual class LootTable * getDefaultLootTable();
    /*255*/ virtual void _removeRider(struct ActorUniqueID const &, bool, bool, bool);
    /*256*/ virtual void _onSizeUpdated();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOR
    MCVAPI void _doAutoAttackOnTouch(class Actor &);
    MCVAPI bool _makeFlySound() const;
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool canExistInPeaceful() const;
    MCVAPI bool canMakeStepSound() const;
    MCVAPI bool canSeeInvisible() const;
    MCVAPI bool canSynchronizeNewEntity() const;
    MCVAPI void changeDimension(class ChangeDimensionPacket const &);
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI float getDeletionDelayTimeSeconds() const;
    MCVAPI int getOutputSignal() const;
    MCVAPI bool hasOutputSignal(unsigned char) const;
    MCVAPI bool interactPreventDefault();
    MCVAPI bool isCreativeModeAllowed();
    MCVAPI bool isFishable() const;
    MCVAPI bool isLeashableType();
    MCVAPI bool isShootable();
    MCVAPI bool isTargetable() const;
    MCVAPI void renderDebugServerState(class Options const &);
    MCVAPI void rideJumped();
#endif
    MCAPI Actor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI Actor(class Level &);
    MCAPI class Vec3 _randomHeartPos();
    MCAPI void _sendDirtyActorData();
    MCAPI bool _tryPlaceAt(class Vec3 const &);
    MCAPI void addEffect(class MobEffectInstance const &);
    MCAPI bool addTag(std::string const &);
    MCAPI int calculateAttackDamage(class Actor &);
    MCAPI bool canBeginOrContinueClimbingLadder() const;
    MCAPI bool canCurrentlySwim() const;
    MCAPI void celebrateHunt(int, bool);
    MCAPI void dropLeash(bool, bool);
    MCAPI void dropTowards(class ItemStack const &, class Vec3);
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const &, enum ActorType);
    MCAPI void forEachLeashedActor(class std::function<void (class gsl::not_null<class Actor *>)>);
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor *) const;
    MCAPI enum PaletteColor getColor() const;
    MCAPI enum PaletteColor getColor2() const;
    MCAPI int getControllingSeat();
    MCAPI class MobEffectInstance const * getEffect(class MobEffect const &) const;
    MCAPI std::vector<struct ActorLink> getLinks() const;
    MCAPI int getMarkVariant() const;
    MCAPI class ItemStack const & getOffhandSlot() const;
    MCAPI class Mob * getOwner() const;
    MCAPI struct ActorUniqueID const getOwnerId() const;
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();
    MCAPI class Player * getPlayerOwner() const;
    MCAPI class Random & getRandom() const;
    MCAPI class Actor * getRideRoot() const;
    MCAPI int getRiderIndex(class Actor &) const;
    MCAPI class ActorRuntimeID getRuntimeID() const;
    MCAPI int getSkinID() const;
    MCAPI bool getStatusFlag(enum ActorFlags) const;
    MCAPI int getStrength() const;
    MCAPI int getStructuralIntegrity() const;
    MCAPI class Actor * getTarget() const;
    MCAPI class ITickingArea * getTickingArea();
    MCAPI class MerchantRecipeList * getTradeOffers();
    MCAPI class Player * getTradingPlayer() const;
    MCAPI struct ActorUniqueID const & getUniqueID() const;
    MCAPI int getVariant() const;
    MCAPI class Vec3 getViewVector(float) const;
    MCAPI bool hasEffect(class MobEffect const &) const;
    MCAPI bool hasFamily(class HashedString const &) const;
    MCAPI bool hasPlayerRider() const;
    MCAPI bool hasRestriction() const;
    MCAPI bool hasTag(std::string const &) const;
    MCAPI bool hasTags() const;
    MCAPI bool hasTickingArea() const;
    MCAPI bool hurt(class ActorDamageSource const &, int, bool, bool);
    MCAPI void initEntity(class EntityRegistryOwned &);
    MCAPI bool isControlledByLocalInstance() const;
    MCAPI bool isInRain() const;
    MCAPI bool isInsideBorderBlock(float) const;
    MCAPI bool isPacified() const;
    MCAPI bool isRider(class Actor const &) const;
    MCAPI bool isRiding() const;
    MCAPI bool isUnderWaterfall() const;
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    MCAPI void loadEntityFlags(class CompoundTag const &, class DataLoadHelper &);
    MCAPI void moveBBs(class Vec3 const &);
    MCAPI void moveTo(class Vec3 const &, class Vec2 const &);
    MCAPI bool onLadder() const;
    MCAPI void pickUpItem(class ItemActor &, int);
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const &, int);
    MCAPI void positionAllRiders();
    MCAPI bool pullInEntity(class Actor &);
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);
    MCAPI void reload();
    MCAPI void removeAllEffects();
    MCAPI void removeAllRiders(bool, bool);
    MCAPI void removeEffect(int);
    MCAPI void removeEffectParticles();
    MCAPI void saveEntityFlags(class CompoundTag &);
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);
    MCAPI void sendActorDefinitionEventTriggered(std::string const &);
    MCAPI void sendMotionToServer();
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const &, bool, bool);
    MCAPI void setCanClimb(bool);
    MCAPI void setCanFly(bool);
    MCAPI void setColor(enum PaletteColor);
    MCAPI void setColor2(enum PaletteColor);
    MCAPI void setHurtDir(int);
    MCAPI void setHurtTime(int);
    MCAPI void setInLove(class Actor *);
    MCAPI void setInvisible(bool);
    MCAPI void setJumpDuration(int);
    MCAPI void setLeashHolder(struct ActorUniqueID);
    MCAPI void setLimitedLife(int);
    MCAPI void setMarkVariant(int);
    MCAPI void setPersistent();
    MCAPI void setPreviousPosRot(class Vec3 const &, class Vec2 const &);
    MCAPI void setSeatDescription(class Vec3 const &, struct SeatDescription const &);
    MCAPI void setSkinID(int);
    MCAPI bool setStatusFlag(enum ActorFlags, bool);
    MCAPI void setStrength(int);
    MCAPI void setStrengthMax(int);
    MCAPI void setStructuralIntegrity(int);
    MCAPI void setTradingPlayer(class Player *);
    MCAPI void setVariant(int);
    MCAPI bool shouldOrphan(class BlockSource &);
    MCAPI void spawnBalloonPopParticles();
    MCAPI void spawnDeathParticles();
    MCAPI void spawnDustParticles(int);
    MCAPI void spawnEatParticles(class ItemStack const &, int);
    MCAPI void spawnTamingParticles(bool);
    MCAPI void teleportRidersTo(class Vec3 const &, int, int);
    MCAPI void testForCollidableMobs(class BlockSource &, class AABB const &, std::vector<class AABB> &);
    MCAPI bool tick(class BlockSource &);
    MCAPI void transferTickingArea(class Dimension &);
    MCAPI void updateBBFromDescription();
    MCAPI void updateDescription();
    MCAPI void updateInBubbleColumnState();
    MCAPI void updateInvisibilityStatus();
    MCAPI void updateTickingData();
    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL;
    MCAPI static float const DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE;
    MCAPI static int const MAX_BYTE_CHARGE_AMOUNT;
    MCAPI static std::string const RIDING_TAG;
    MCAPI static void checkEntityOnewayCollision(class BlockSource &, class BlockPos const &);

//protected:
    MCAPI bool _damageSensorComponentHurt(int &, int, class ActorDamageSource const &);
    MCAPI class Block const & _getBlockWhenClimbing() const;
    MCAPI void _playMovementSound(bool);
    MCAPI void _refreshAABB();
    MCAPI void _setNetherPortalData(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, int);

//private:
    MCAPI void _exitRide(class Actor const &, float);
    MCAPI void _initializeLeashRopeSystem();
    MCAPI void _manageRiders(class BlockSource &);
    MCAPI void _moveHitboxTo(class Vec3 const &);
    MCAPI void _sendLinkPacket(struct ActorLink const &) const;
    MCAPI void _serializeComponents(class CompoundTag &);
    MCAPI void _spawnPukeParticles();
    MCAPI void _spawnTreasureHuntingParticles();
    MCAPI void _tryPlantWitherRose();
    MCAPI void _updateComposition(bool);
    MCAPI void _updateOwnerChunk();

protected:

private:

};