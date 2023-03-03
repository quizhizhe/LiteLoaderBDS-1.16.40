// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptBinderBlockTemplate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDERBLOCKTEMPLATE
public:
    class ScriptBinderBlockTemplate& operator=(class ScriptBinderBlockTemplate const &) = delete;
    ScriptBinderBlockTemplate(class ScriptBinderBlockTemplate const &) = delete;
    ScriptBinderBlockTemplate() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBinderBlockTemplate();
    /*1*/ virtual std::string const & getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBINDERBLOCKTEMPLATE
#endif
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class Block const &, class BlockPos const &, class ScriptApi::ScriptObjectHandle &&);

};