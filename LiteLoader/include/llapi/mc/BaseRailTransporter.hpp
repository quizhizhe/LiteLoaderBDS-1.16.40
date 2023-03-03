// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BaseRailTransporter : public BaseCircuitComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASERAILTRANSPORTER
public:
    class BaseRailTransporter& operator=(class BaseRailTransporter const &) = delete;
    BaseRailTransporter(class BaseRailTransporter const &) = delete;
    BaseRailTransporter() = delete;
#endif

public:
    /*0*/ virtual ~BaseRailTransporter();
    /*5*/ virtual void __unk_vfn_5();
    /*9*/ virtual unsigned __int64 getBaseType() const;
    /*10*/ virtual unsigned __int64 getInstanceType() const;
    /*12*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*13*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*15*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*18*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_21();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASERAILTRANSPORTER
#endif

};