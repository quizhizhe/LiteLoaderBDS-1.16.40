// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LowMemoryWatcher {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOWMEMORYWATCHER
public:
    class LowMemoryWatcher& operator=(class LowMemoryWatcher const &) = delete;
    LowMemoryWatcher(class LowMemoryWatcher const &) = delete;
    LowMemoryWatcher() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOWMEMORYWATCHER
#endif

//private:

private:
    MCAPI static std::list<class std::vector<char, class std::allocator<char>>> mPleaseLeakMemory;
    MCAPI static class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> mTimeToResetWarning;

};