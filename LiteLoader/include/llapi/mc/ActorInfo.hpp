// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ActorInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRApublic:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORINFO
#endif
    MCAPI ActorInfo();
    MCAPI ActorInfo(struct ActorInfo const &);
    MCAPI void load(class CompoundTag const *);
    MCAPI struct ActorInfo & operator=(struct ActorInfo const &);
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI ~ActorInfo();

};