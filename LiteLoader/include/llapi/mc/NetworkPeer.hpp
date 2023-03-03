// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetworkPeer {

#define AFTER_EXTRA
    // Add Member There
public:
    enum Reliability : int {
        Reliable = 0x0,
        ReliableOrdered = 0x1,
        Unreliable = 0x2,
        UnreliableSequenced = 0x3,
    };

    enum DataStatus : int {
        HasData = 0x0,
        NoData = 0x1,
        BrokenData = 0x2,
    };

    enum NetworkLoad : __int32 {
        Unrestricted = 0x0,
        Low = 0x1,
        Medium = 0x2,
        High = 0x3,
    };

    struct NetworkStatus {
        NetworkLoad mLoad;
        int mCurrentPing;
        int mAveragePing;
        int mApproximateMaxBps;
        float mCurrentPacketLoss;
        float mAveragePacketLoss;
        unsigned __int64 mTotalBytesReceived;
        unsigned __int64 mTotalBytesSent;
        unsigned __int64 unk40;
        int unk48;
        bool unk52;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPEER
public:
    class NetworkPeer& operator=(class NetworkPeer const &) = delete;
    NetworkPeer(class NetworkPeer const &) = delete;
    NetworkPeer() = delete;
#endif

public:
    /*0*/ virtual ~NetworkPeer();
    /*1*/ virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility) = 0;
    /*2*/ virtual enum NetworkPeer::DataStatus receivePacket(std::string &) = 0;
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() = 0;
    /*4*/ virtual void update();
    /*5*/ virtual void flush(class std::function<void (void)> &&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKPEER
#endif

};