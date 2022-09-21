// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"
#include "Connector.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LocalConnector {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALCONNECTOR
public:
    class LocalConnector& operator=(class LocalConnector const &) = delete;
    LocalConnector(class LocalConnector const &) = delete;
    LocalConnector() = delete;
#endif

public:
    /*0*/ virtual ~LocalConnector();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual std::string getLocalIp();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
    /*10*/ virtual void startNatPunchingClient(class Social::GameConnectionInfo);
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual struct RakNet::RakNetGUID getGUID() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCALCONNECTOR
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI unsigned short getIPv4Port() const;
    MCVAPI unsigned short getIPv6Port() const;
    MCVAPI std::vector<std::string> getLocalIps() const;
    MCVAPI unsigned short getPort() const;
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    MCVAPI bool isIPv4Supported() const;
    MCVAPI bool isIPv6Supported() const;
    MCVAPI void onAppResumed();
    MCVAPI void onAppSuspended();
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI void setupNatPunch(bool);
#endif
    MCAPI void disconnect();
    MCAPI void runEvents();

//private:

private:
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;

};