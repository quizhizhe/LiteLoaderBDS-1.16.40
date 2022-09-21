// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class NetworkIdentifier;
#undef BEFORE_EXTRA

namespace RakNet {

#define AFTER_EXTRA
// Add Member There
    enum StartupResult;
    class RakNetSocket2;
    struct SplitPacketChannel;
    class BitStream;
    struct Packet;
    class RakNetSocket2;
    class RakPeerInterface;
    class SimpleMutex;
    struct SocketDescriptor;
    struct SplitPacketChannel;

    struct SystemAddress {
        char filler[17 * 8]; // uncertain?
        MCAPI const char* ToString(bool, char) const;
    };
    struct RakNetGUID {
        uint64_t unk;
        short unk8;
    };
    struct AddressOrGUID {
        RakNetGUID guid;
        SystemAddress adr;
    };

    class RakPeer {
    public:
        RakPeer(RakPeer const&) = delete;
        RakPeer(RakPeer&&) = delete;
        SystemAddress getAdr(NetworkIdentifier const& ni) {
            RakNetGUID const& guid = dAccess<RakNetGUID>(&ni, 8);
            return RakPeer::GetSystemAddressFromGuid(guid);
        }
        MCAPI virtual SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;
        MCAPI virtual int GetAveragePing(struct RakNet::AddressOrGUID);
        MCAPI virtual int GetLastPing(struct RakNet::AddressOrGUID) const;
        MCAPI virtual int GetLowestPing(struct RakNet::AddressOrGUID) const;
    };
#undef AFTER_EXTRA
    MCAPI unsigned int ConnectionAttemptLoop(void *);
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, unsigned __int64, class RakNet::BitStream &);
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, unsigned __int64);
    MCAPI int SplitPacketChannelComp(unsigned short const &, struct RakNet::SplitPacketChannel *const &);
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;
    MCAPI unsigned int UpdateNetworkLoop(void *);
    MCAPI unsigned int UpdateTCPInterfaceLoop(void *);
    MCAPI void _RakFree_Ex(void *, char const *, unsigned int);
    MCAPI void * _RakMalloc_Ex(unsigned __int64, char const *, unsigned int);
    MCAPI void * _RakRealloc_Ex(void *, unsigned __int64, char const *, unsigned int);

};