// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    class BlockCommandOrigin& operator=(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~BlockCommandOrigin();
    /*1*/ virtual std::string const & getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class Level * getLevel() const;
    /*6*/ virtual class Dimension * getDimension() const;
    /*7*/ virtual class Actor * getEntity() const;
    /*8*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*9*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*16*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*17*/ virtual bool isSelectorExpansionAllowed() const;
    /*21*/ virtual enum CommandOriginType getOriginType() const;
    /*26*/ virtual class CommandBlockActor * getBlockEntity() const;
    /*27*/ virtual class BaseCommandBlock * getBaseCommandBlock() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMMANDORIGIN
#endif
    MCAPI BlockCommandOrigin(class BlockSource &, class BlockPos const &);

};