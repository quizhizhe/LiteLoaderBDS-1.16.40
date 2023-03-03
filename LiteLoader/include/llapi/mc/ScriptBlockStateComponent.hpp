// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptBlockStateComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKSTATECOMPONENT
public:
    class ScriptBlockStateComponent& operator=(class ScriptBlockStateComponent const &) = delete;
    ScriptBlockStateComponent(class ScriptBlockStateComponent const &) = delete;
    ScriptBlockStateComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockStateComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Block const &, class BlockSource &, class BlockPos const &, class ScriptApi::ScriptObjectHandle const &) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Block const &, class BlockSource &, class BlockPos const &, class ScriptApi::ScriptObjectHandle &) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Block const &, class BlockSource &, class BlockPos const &, bool &) const;
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, bool &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKSTATECOMPONENT
#endif

//private:

private:
    MCAPI static class HashedString const mHash;

};