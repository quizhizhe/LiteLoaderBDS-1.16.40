#include <llapi/mc/NetworkIdentifier.hpp>
#include <llapi/mc/RakNet.hpp>

string NetworkIdentifier::getIP() {
    string rv =getAddress();
//    Global<RakNet::RakPeer>->getAdr(*this).ToString_New(true, rv.data(), ':');
    return rv.substr(0, rv.find('|'));
}