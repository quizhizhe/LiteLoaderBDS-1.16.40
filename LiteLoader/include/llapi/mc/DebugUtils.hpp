// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace DebugUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI bool DEFAULT_ASSERT_HANDLER(char const *, char const *, char const *, bool, int, char const *, char const *, bool);
    MCAPI extern class std::mutex debugUtilMutex;
    MCAPI extern class std::function<void (std::string &)> gFireAssertTelemetry;
    MCAPI extern class std::function<void (std::string const &, std::string const &, std::string const &)> gFireCrashedTelemetry;
    MCAPI extern std::string gPublishAssertFullMessage;
    MCAPI extern bool gShouldPresentDialog;
    MCAPI extern class ServiceOverrider<bool ( *)(char const *, char const *, char const *, bool, int, char const *, char const *, bool)> gp_assert_handler;

};