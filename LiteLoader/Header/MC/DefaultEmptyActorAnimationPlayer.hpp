// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DefaultEmptyActorAnimationPlayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTEMPTYACTORANIMATIONPLAYER
public:
    class DefaultEmptyActorAnimationPlayer& operator=(class DefaultEmptyActorAnimationPlayer const &) = delete;
    DefaultEmptyActorAnimationPlayer(class DefaultEmptyActorAnimationPlayer const &) = delete;
#endif

public:
    /*0*/ virtual ~DefaultEmptyActorAnimationPlayer();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool hasAnimationFinished() const;
    /*7*/ virtual class ActorAnimationPlayer * findAnimation(class HashedString const &);
    /*8*/ virtual enum ActorAnimationType getAnimationType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFAULTEMPTYACTORANIMATIONPLAYER
    MCVAPI void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    MCVAPI void resetAnimation();
#endif
    MCAPI DefaultEmptyActorAnimationPlayer();

};