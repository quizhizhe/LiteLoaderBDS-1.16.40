// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Trade2ContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2CONTAINERMANAGERMODEL
public:
    class Trade2ContainerManagerModel& operator=(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~Trade2ContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*10*/ virtual void broadcastChanges();
    /*11*/ virtual bool isValid(float);
    /*12*/ virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADE2CONTAINERMANAGERMODEL
#endif

};