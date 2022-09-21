// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GoalSelectorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOALSELECTORCOMPONENT
public:
    class GoalSelectorComponent& operator=(class GoalSelectorComponent const &) = delete;
    GoalSelectorComponent(class GoalSelectorComponent const &) = delete;
    GoalSelectorComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOALSELECTORCOMPONENT
#endif
    MCAPI void addGoal(int, std::unique_ptr<class Goal>);
    MCAPI void buildDebugInfo(std::string &) const;
    MCAPI void stopNonTargetedGoals();

//private:
    MCAPI void _eraseGoals(bool ( *)(struct std::pair<unsigned short, class PrioritizedGoal> &));

private:

};