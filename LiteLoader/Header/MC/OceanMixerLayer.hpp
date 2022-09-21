// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OceanMixerLayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMIXERLAYER
public:
    class OceanMixerLayer& operator=(class OceanMixerLayer const &) = delete;
    OceanMixerLayer(class OceanMixerLayer const &) = delete;
    OceanMixerLayer() = delete;
#endif

public:
    /*0*/ virtual ~OceanMixerLayer();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _fillArea(class LayerDetails::WorkingData<class Biome *, class Biome *> &, int, int, int, int, int, class LayerResult<enum BiomeTemperatureCategory>) const;
    /*4*/ virtual class std::tuple<int, int, unsigned int, unsigned int> _getAreaRead(int, int, unsigned int, unsigned int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMIXERLAYER
#endif

};