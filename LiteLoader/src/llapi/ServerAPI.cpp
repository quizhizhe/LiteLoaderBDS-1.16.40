#include <MC/Common.hpp>
#include <MC/SharedConstants.hpp>
#include <MC/Minecraft.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include "include/llapi/ServerAPI.h"
#include <string>
class UserEntityIdentifierComponent;

namespace LL {
std::string getBdsVersion() {
    return Common::getGameVersionString();
}

int getServerProtocolVersion() {
    return SharedConstants::NetworkProtocolVersion;
}

bool setServerMotd(const std::string& motd) {
    if (!Global<ServerNetworkHandler>)
        return false;

    Global<ServerNetworkHandler>->allowIncomingConnections(motd, true);
    return true;
}
} // namespace LL
