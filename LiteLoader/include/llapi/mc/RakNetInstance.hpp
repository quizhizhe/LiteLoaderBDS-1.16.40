// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakNet.hpp"
#include "Social.hpp"
#include "Connector.hpp"
#include "RakPeerHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakNetInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETINSTANCE
public:
    class RakNetInstance& operator=(class RakNetInstance const &) = delete;
    RakNetInstance(class RakNetInstance const &) = delete;
    RakNetInstance() = delete;
#endif

public:
    /*0*/ virtual ~RakNetInstance();
    /*1*/ virtual void onAppResumed();
    /*2*/ virtual void onAppSuspended();
    /*3*/ virtual std::vector<std::string> getLocalIps() const;
    /*4*/ virtual std::string getLocalIp();
    /*5*/ virtual unsigned short getPort() const;
    /*6*/ virtual std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /*7*/ virtual class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /*8*/ virtual void setupNatPunch(bool);
    /*9*/ virtual struct Connector::NatPunchInfo getNatPunchInfo() const;
    /*10*/ virtual void startNatPunchingClient(class Social::GameConnectionInfo);
    /*11*/ virtual void addConnectionStateListener(class Connector::ConnectionStateListener *);
    /*12*/ virtual void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    /*13*/ virtual bool isIPv4Supported() const;
    /*14*/ virtual bool isIPv6Supported() const;
    /*15*/ virtual unsigned short getIPv4Port() const;
    /*16*/ virtual unsigned short getIPv6Port() const;
    /*17*/ virtual struct RakNet::RakNetGUID getGUID() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETINSTANCE
#endif
    MCAPI RakNetInstance(class RakNetInstance::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &);
    MCAPI bool connect(class Social::GameConnectionInfo, class Social::GameConnectionInfo);
    MCAPI void disconnect();
    MCAPI bool host(struct ConnectionDefinition const &);
    MCAPI void runEvents();
    MCAPI void tick();

//private:
    MCAPI void _changeNatState(enum RakNetInstance::NATState, int, std::string const &);
    MCAPI class std::shared_ptr<class RakNetInstance::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const &);
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const &);
    MCAPI void _pingNatService(bool);
    MCAPI void _storeLocalIP();

private:

};