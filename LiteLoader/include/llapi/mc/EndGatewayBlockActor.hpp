// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EndGatewayBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYBLOCKACTOR
public:
    class EndGatewayBlockActor& operator=(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~EndGatewayBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*9*/ virtual void onChanged(class BlockSource &);
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void triggerEvent(int, int);
    /*17*/ virtual void __unk_vfn_17();
    /*19*/ virtual bool hasAlphaLayer() const;
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDGATEWAYBLOCKACTOR
#endif
    MCAPI int getParticleAmount(class BlockSource &, class BlockPos const &) const;
    MCAPI void teleportEntity(class Actor &);
    MCAPI static class BlockPos findExitPortal(class WorldGenerator &, class BlockPos const &);
    MCAPI static class BlockPos findTallestBlock(class BlockSource &, class BlockPos const &, int, bool);
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource &, class BlockPos const &, bool, int);

//private:
    MCAPI static bool _hasRoomForPlayer(class BlockSource &, class BlockPos const &);

private:

};