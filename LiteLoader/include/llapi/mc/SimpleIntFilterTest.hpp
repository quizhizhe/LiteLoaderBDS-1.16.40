// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SimpleIntFilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEINTFILTERTEST
public:
    class SimpleIntFilterTest& operator=(class SimpleIntFilterTest const &) = delete;
    SimpleIntFilterTest(class SimpleIntFilterTest const &) = delete;
    SimpleIntFilterTest() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEINTFILTERTEST
    MCVAPI class Json::Value _serializeValue() const;
    MCVAPI bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
#endif

};