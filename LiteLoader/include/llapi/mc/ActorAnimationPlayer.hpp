// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorAnimationPlayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONPLAYER
public:
    class ActorAnimationPlayer& operator=(class ActorAnimationPlayer const &) = delete;
    ActorAnimationPlayer(class ActorAnimationPlayer const &) = delete;
    ActorAnimationPlayer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONPLAYER
    MCVAPI void bindParticleEffects(class std::unordered_map<class StringKey, class ParticleEffectPtr, struct std::hash<class StringKey>, struct std::equal_to<class StringKey>, class std::allocator<struct std::pair<class StringKey const, class ParticleEffectPtr>>> const &);
    MCVAPI void bindSoundEffects(class std::unordered_map<class StringKey, std::string, struct std::hash<class StringKey>, struct std::equal_to<class StringKey>, class std::allocator<struct std::pair<class StringKey const, std::string>>> const &);
    MCVAPI void buildBoneToPartMapping(class AnimationComponent &);
#endif

};