// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DropperBlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERBLOCKACTOR
public:
    class DropperBlockActor& operator=(class DropperBlockActor const &) = delete;
    DropperBlockActor(class DropperBlockActor const &) = delete;
    DropperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DROPPERBLOCKACTOR
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI std::string getName() const;
#endif
    MCAPI bool pushOutItems(class BlockSource &);

//private:
    MCAPI class Container * _getContainerAt(class BlockSource &, class Vec3 const &);
    MCAPI bool _tryMoveInItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    MCAPI bool _tryPushToComposter(class BlockSource &, int);

private:

};