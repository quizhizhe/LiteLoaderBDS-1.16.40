// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorIsPersistentTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISPERSISTENTTEST
public:
    class ActorIsPersistentTest& operator=(class ActorIsPersistentTest const &) = delete;
    ActorIsPersistentTest(class ActorIsPersistentTest const &) = delete;
    ActorIsPersistentTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorIsPersistentTest();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORISPERSISTENTTEST
#endif

};