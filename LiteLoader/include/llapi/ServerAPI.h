#pragma once
#include <string>
#include "Global.h"

namespace ll {
LIAPI std::string getBdsVersion();
LIAPI int getServerProtocolVersion();
LIAPI bool setServerMotd(const std::string& motd);
} // namespace ll
