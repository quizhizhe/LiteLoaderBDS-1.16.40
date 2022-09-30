// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
// Refer to https://github.com/LiteLDev/BEProtocolGolang/blob/master/minecraft/protocol/player.go
enum PlayerActionType {
    StartBreak,
    AbortBreak,
    StopBreak,
    GetUpdatedBlock,
    DropItem,
    StartSleeping,
    StopSleeping,
    Respawn,
    Jump,
    StartSprint,
    StopSprint,
    StartSneak,
    StopSneak,
    CreativePlayerDestroyBlock,
    DimensionChangeDone,
    StartGlide,
    StopGlide,
    BuildDenied,
    CrackBreak,
    ChangeSkin,
    SetEnchantmentSeed,
    StartSwimming,
    StopSwimming,
    StartSpinAttack,
    StopSpinAttack,
    StartBuildingBlock,
    PredictDestroyBlock,
    ContinueDestroyBlock,
};

#undef BEFORE_EXTRA

class PlayerActionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    BlockPos position;           // 48
    FaceID blockFace;            // 60
    PlayerActionType actionType; // 64
    ActorRuntimeID runtimeID;    // 72

    inline std::string toDebugString() {
        return fmt::format("{}: position: ({}), blockFace: {}, actionType: {}, runtimeID: {}",
            __super::toDebugString(),
            position.toString(), (int)blockFace, (int)actionType, runtimeID.id);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERACTIONPACKET
public:
    class PlayerActionPacket& operator=(class PlayerActionPacket const &) = delete;
    PlayerActionPacket(class PlayerActionPacket const &) = delete;
    PlayerActionPacket() = delete;
#endif

public:
    /*0*/ virtual ~PlayerActionPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERACTIONPACKET
#endif

};