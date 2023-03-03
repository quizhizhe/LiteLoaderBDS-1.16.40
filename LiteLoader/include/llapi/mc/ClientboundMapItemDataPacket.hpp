// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MapItemTrackedActor.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ClientboundMapItemDataPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDMAPITEMDATAPACKET
public:
    class ClientboundMapItemDataPacket& operator=(class ClientboundMapItemDataPacket const &) = delete;
    ClientboundMapItemDataPacket(class ClientboundMapItemDataPacket const &) = delete;
    ClientboundMapItemDataPacket() = delete;
#endif

public:
    /*0*/ virtual ~ClientboundMapItemDataPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDMAPITEMDATAPACKET
#endif
    MCAPI ClientboundMapItemDataPacket(struct ActorUniqueID, signed char, std::vector<struct std::pair<struct MapItemTrackedActor::UniqueId, class std::shared_ptr<class MapDecoration>>> const &, class buffer_span<unsigned int>, int, int, int, int, class AutomaticID<class Dimension, int>, bool);
    MCAPI ClientboundMapItemDataPacket(class gsl::not_null<class MapItemSavedData *>, class Level &);

};