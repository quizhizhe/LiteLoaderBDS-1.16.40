// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CircuitSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSYSTEM
public:
    class CircuitSystem& operator=(class CircuitSystem const &) = delete;
    CircuitSystem(class CircuitSystem const &) = delete;
    CircuitSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CIRCUITSYSTEM
#endif
    MCAPI void evaluate(class BlockSource *);
    MCAPI void setStrength(class BlockPos const &, int);
    MCAPI void updateBlocks(class BlockSource &, class BlockPos const &);

//private:
    MCAPI class BaseCircuitComponent * createComponent(class BlockPos const &, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    MCAPI void evaluateComponents(bool);
    MCAPI void updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent *>, class BlockPos const &, class BlockPos const &, class BlockSource &);

private:

};