// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NormalNoiseLayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NORMALNOISELAYER
public:
    class NormalNoiseLayer& operator=(class NormalNoiseLayer const &) = delete;
    NormalNoiseLayer(class NormalNoiseLayer const &) = delete;
    NormalNoiseLayer() = delete;
#endif

public:
    /*0*/ virtual ~NormalNoiseLayer();
    /*1*/ virtual void init(__int64);
    /*2*/ virtual class LayerDetails::TransferData<float> _allocateAndFill(unsigned __int64, int, int, unsigned int, unsigned int) const;
    /*3*/ virtual void _fillArea(class LayerDetails::WorkingData<float, char> &, int, int, int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NORMALNOISELAYER
#endif

};