// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HudContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMANAGERMODEL
public:
    class HudContainerManagerModel& operator=(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~HudContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*12*/ virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUDCONTAINERMANAGERMODEL
#endif

};