// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "MC/HashedString.hpp"
#undef BEFORE_EXTRA

struct ActorDefinitionIdentifier {

#define AFTER_EXTRA
// Add Member There
std::string ns;             // 0
std::string identifier;     // 32
std::string event;          // 64
std::string fullname;       // 96
HashedString canonicalHash; // 128

public:
    inline std::string const& getCanonicalName() const{
        return this->canonicalHash.getString();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONIDENTIFIER
public:
    ActorDefinitionIdentifier() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDEFINITIONIDENTIFIER
#endif
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    MCAPI ActorDefinitionIdentifier(std::string const &);
    MCAPI ActorDefinitionIdentifier(enum ActorType);
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    MCAPI ~ActorDefinitionIdentifier();
    MCAPI static std::string const EVENT_BEGIN;
    MCAPI static std::string const EVENT_END;
    MCAPI static std::string const NAMESPACE_SEPARATOR;

//private:
    MCAPI void _initialize();
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};