// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IslandLayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISLANDLAYER
public:
    class IslandLayer& operator=(class IslandLayer const &) = delete;
    IslandLayer(class IslandLayer const &) = delete;
    IslandLayer() = delete;
#endif

public:
    /*0*/ virtual ~IslandLayer();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _fillArea(class LayerDetails::WorkingData<enum LayerValues::Terrain, char> &, int, int, int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISLANDLAYER
#endif

};