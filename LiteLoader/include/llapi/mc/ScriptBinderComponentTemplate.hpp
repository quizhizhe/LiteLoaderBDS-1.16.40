// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptBinderComponentTemplate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBINDERCOMPONENTTEMPLATE
public:
    class ScriptBinderComponentTemplate& operator=(class ScriptBinderComponentTemplate const &) = delete;
    ScriptBinderComponentTemplate(class ScriptBinderComponentTemplate const &) = delete;
    ScriptBinderComponentTemplate() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBinderComponentTemplate();
    /*1*/ virtual std::string const & getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBINDERCOMPONENTTEMPLATE
#endif
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(std::string const &, class ScriptApi::ScriptObjectHandle &&);

};