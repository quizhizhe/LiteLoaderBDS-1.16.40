// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GuardianAttackDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANATTACKDEFINITION
public:
    class GuardianAttackDefinition& operator=(class GuardianAttackDefinition const &) = delete;
    GuardianAttackDefinition(class GuardianAttackDefinition const &) = delete;
    GuardianAttackDefinition() = delete;
#endif

public:
    /*0*/ virtual ~GuardianAttackDefinition();
    /*1*/ virtual bool validateMobType(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIANATTACKDEFINITION
#endif
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>> &);

};