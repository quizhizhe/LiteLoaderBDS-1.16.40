// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DebugInfoComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGINFOCOMPONENT
public:
    class DebugInfoComponent& operator=(class DebugInfoComponent const &) = delete;
    DebugInfoComponent(class DebugInfoComponent const &) = delete;
    DebugInfoComponent() = delete;
#endif

public:
    /*0*/ virtual ~DebugInfoComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual enum EventResult onActorDefinitionEventTriggered(class Actor &, std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEBUGINFOCOMPONENT
#endif
    MCAPI DebugInfoComponent(class DebugInfoComponent &&);
    MCAPI class DebugInfoComponent & operator=(class DebugInfoComponent &&);
    MCAPI void removeListener(class HashedString const &, class NetworkIdentifier, unsigned char);

};