// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FindActorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDACTORDEFINITION
public:
    class FindActorDefinition& operator=(class FindActorDefinition const &) = delete;
    FindActorDefinition(class FindActorDefinition const &) = delete;
    FindActorDefinition() = delete;
#endif

public:
    /*0*/ virtual ~FindActorDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINDACTORDEFINITION
#endif

};