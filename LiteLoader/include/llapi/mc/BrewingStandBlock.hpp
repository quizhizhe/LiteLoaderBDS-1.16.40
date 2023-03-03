// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BrewingStandBlock : public ActorBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDBLOCK
public:
    class BrewingStandBlock& operator=(class BrewingStandBlock const &) = delete;
    BrewingStandBlock(class BrewingStandBlock const &) = delete;
    BrewingStandBlock() = delete;
#endif

public:
    /*0*/ virtual ~BrewingStandBlock();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /*3*/ virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /*4*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class Actor *) const;
    /*12*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*17*/ virtual bool shouldRandomTick() const;
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*22*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /*23*/ virtual void getConnectedDirections(class Block const &, class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual bool isWaterBlocking() const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual bool canHurtAndBreakItem() const;
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual bool canContainLiquid() const;
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual bool canBeUsedInCommands(bool, class BaseGameVersion const &) const;
    /*54*/ virtual float getThickness() const;
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*72*/ virtual void updateEntityAfterFallOn(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*77*/ virtual void __unk_vfn_77();
    /*78*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /*84*/ virtual bool breaksFallingBlocks(class Block const &) const;
    /*85*/ virtual void __unk_vfn_85();
    /*86*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*89*/ virtual void __unk_vfn_89();
    /*90*/ virtual void __unk_vfn_90();
    /*91*/ virtual void __unk_vfn_91();
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*94*/ virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual class HitResult clip(class BlockSource &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*98*/ virtual void __unk_vfn_98();
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*100*/ virtual int calcVariant(class BlockSource &, class BlockPos const &) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*103*/ virtual void __unk_vfn_103();
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /*109*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*110*/ virtual void __unk_vfn_110();
    /*111*/ virtual void __unk_vfn_111();
    /*112*/ virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /*113*/ virtual void __unk_vfn_113();
    /*114*/ virtual void __unk_vfn_114();
    /*115*/ virtual bool shouldStopFalling(class Actor &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*117*/ virtual float calcGroundFriction(class Mob &, class BlockPos const &) const;
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*120*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*121*/ virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*124*/ virtual void __unk_vfn_124();
    /*125*/ virtual void __unk_vfn_125();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*129*/ virtual void __unk_vfn_129();
    /*130*/ virtual void __unk_vfn_130();
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*133*/ virtual void __unk_vfn_133();
    /*134*/ virtual void onGraphicsModeChanged(bool, bool, bool);
    /*135*/ virtual void __unk_vfn_135();
    /*136*/ virtual float getShadeBrightness() const;
    /*137*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /*138*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*139*/ virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /*140*/ virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*143*/ virtual class Block const & getRenderBlock() const;
    /*144*/ virtual void __unk_vfn_144();
    /*145*/ virtual void __unk_vfn_145();
    /*146*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*147*/ virtual class BlockLegacy & init();
    /*148*/ virtual class BlockLegacy & setLightBlock(struct Brightness);
    /*149*/ virtual class BlockLegacy & setLightEmission(float);
    /*150*/ virtual class BlockLegacy & setExplodeable(float);
    /*151*/ virtual class BlockLegacy & setDestroyTime(float);
    /*152*/ virtual class BlockLegacy & setFriction(float);
    /*153*/ virtual class BlockLegacy & addProperty(enum BlockProperty);
    /*154*/ virtual class BlockLegacy & addState(class ItemState const &);
    /*155*/ virtual class BlockLegacy & addState(class ItemState const &, unsigned __int64);
    /*156*/ virtual class BlockLegacy & setAllowsRunes(bool);
    /*157*/ virtual class BlockLegacy & setMapColor(class Color const &);
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual void __unk_vfn_159();
    /*160*/ virtual void setVisualShape(class AABB const &);
    /*161*/ virtual void setVisualShape(class Vec3 const &, class Vec3 const &);
    /*162*/ virtual void __unk_vfn_162();
    /*163*/ virtual void __unk_vfn_163();
    /*164*/ virtual class ItemInstance getEntityResourceItem(class Random &, class BlockActor const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREWINGSTANDBLOCK
    MCVAPI class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCVAPI class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isContainerBlock() const;
    MCVAPI bool isCraftingBlock() const;
    MCVAPI bool isInteractiveBlock() const;
    MCVAPI bool use(class Player &, class BlockPos const &) const;
#endif

};