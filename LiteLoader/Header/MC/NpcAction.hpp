// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NpcAction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCACTION
public:
    class NpcAction& operator=(class NpcAction const &) = delete;
    NpcAction(class NpcAction const &) = delete;
    NpcAction() = delete;
#endif

public:
    /*0*/ virtual ~NpcAction();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual bool fromJson(class Json::Value const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCACTION
#endif
    MCAPI bool operator==(class NpcAction const &) const;
    MCAPI void setButtonName(std::string const &);
    MCAPI void setText(std::string const &);
    MCAPI static std::unique_ptr<class NpcAction> read(class Json::Value const &);

//protected:
    MCAPI class Json::Value toJsonBase(class Json::Value &);

//private:

protected:

private:
    MCAPI static std::string const BUTTON_NAME_KEY;
    MCAPI static std::string const DATA_KEY;
    MCAPI static std::string const MODE_KEY;
    MCAPI static std::string const TEXT_KEY;
    MCAPI static std::string const TYPE_KEY;

};