// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PermissionCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONCOMMAND
public:
    class PermissionCommand& operator=(class PermissionCommand const &) = delete;
    PermissionCommand(class PermissionCommand const &) = delete;
    PermissionCommand() = delete;
#endif

public:
    /*0*/ virtual ~PermissionCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERMISSIONCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &, class PermissionsFile *);

//private:
    MCAPI void list(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void reload(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void set(class CommandOrigin const &, class CommandOutput &) const;

private:
    MCAPI static class PermissionsFile * mPermissionsFile;

};