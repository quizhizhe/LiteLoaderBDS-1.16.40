// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TaskGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKGROUP
public:
    class TaskGroup& operator=(class TaskGroup const &) = delete;
    TaskGroup(class TaskGroup const &) = delete;
    TaskGroup() = delete;
#endif

public:
    /*0*/ virtual ~TaskGroup();
    /*1*/ virtual void taskRegister(class std::shared_ptr<class BackgroundTask>);
    /*2*/ virtual void requeueTask(class std::shared_ptr<class BackgroundTask>, bool);
    /*3*/ virtual enum TaskGroupState getState() const;
    /*4*/ virtual void processCoroutines();
    /*5*/ virtual void taskComplete(class gsl::not_null<class BackgroundTask *>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TASKGROUP
#endif
    MCAPI TaskGroup(class WorkerPool &, class Scheduler &, std::string);
    MCAPI void flush(class std::function<void (void)>);
    MCAPI bool isEmpty() const;
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfo &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfo &, class std::function<class TaskResult (void)> &&);
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);

//private:
    MCAPI void _forAllTasks(class std::unique_lock<class std::mutex> &, class std::function<void (class std::shared_ptr<class BackgroundTask> const &)>);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> _queueInternal(class std::shared_ptr<class BackgroundTask>);
    MCAPI static class TaskGroup * getCurrentTaskGroup();

private:

};