// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BackgroundTaskQueue {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKQUEUE
public:
    class BackgroundTaskQueue& operator=(class BackgroundTaskQueue const &) = delete;
    BackgroundTaskQueue(class BackgroundTaskQueue const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDTASKQUEUE
#endif
    MCAPI BackgroundTaskQueue();
    MCAPI void flush();
    MCAPI void queue(class std::shared_ptr<class BackgroundTask>, bool);
    MCAPI class std::shared_ptr<class BackgroundTask> tryPop(int);
    MCAPI ~BackgroundTaskQueue();

//private:
    MCAPI bool _fetchAllAvailableTasks();

private:

};