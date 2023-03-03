// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShulkerBoxBlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCKACTOR
public:
    class ShulkerBoxBlockActor& operator=(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKACTOR
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI std::string getName() const;
    MCVAPI class AABB getObstructionAABB() const;
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCVAPI void onPlace(class BlockSource &);
    MCVAPI void playCloseSound(class BlockSource &);
    MCVAPI void playOpenSound(class BlockSource &);
    MCVAPI bool save(class CompoundTag &) const;
    MCVAPI void tick(class BlockSource &);
#endif
    MCAPI ShulkerBoxBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &);
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

//private:
    MCAPI class Vec3 _calculateActorMovementIntoShulker(std::vector<class AABB> const &, class AABB const &) const;
    MCAPI void _calculateBB();
    MCAPI void _moveCollidedEntities(class BlockSource &) const;

private:

};