// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NearestAttackableTargetDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETDEFINITION
public:
    class NearestAttackableTargetDefinition& operator=(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition(class NearestAttackableTargetDefinition const &) = delete;
    NearestAttackableTargetDefinition() = delete;
#endif

public:
    /*0*/ virtual ~NearestAttackableTargetDefinition();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool validate(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETDEFINITION
#endif
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>> &);

};