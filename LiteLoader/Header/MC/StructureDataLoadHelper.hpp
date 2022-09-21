// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureDataLoadHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREDATALOADHELPER
public:
    class StructureDataLoadHelper& operator=(class StructureDataLoadHelper const &) = delete;
    StructureDataLoadHelper(class StructureDataLoadHelper const &) = delete;
    StructureDataLoadHelper() = delete;
#endif

public:
    /*0*/ virtual ~StructureDataLoadHelper();
    /*1*/ virtual class Vec3 loadPosition(class Vec3 const &);
    /*2*/ virtual class BlockPos loadBlockPosition(class BlockPos const &);
    /*3*/ virtual class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual float loadRotationDegreesY(float);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual float loadRotationRadiansY(float);
    /*8*/ virtual unsigned char loadFacingID(unsigned char);
    /*9*/ virtual class Vec3 loadDirection(class Vec3 const &);
    /*10*/ virtual enum Direction::Type loadDirection(enum Direction::Type);
    /*11*/ virtual enum Rotation loadRotation(enum Rotation);
    /*12*/ virtual enum Mirror loadMirror(enum Mirror);
    /*13*/ virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /*14*/ virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /*15*/ virtual enum DataLoadHelperType getType() const;
    /*16*/ virtual bool shouldResetTime();
    /*17*/ virtual struct ActorUniqueID _generateNewID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREDATALOADHELPER
    MCVAPI float loadRotationDegreesX(float);
    MCVAPI float loadRotationRadiansX(float);
#endif

};