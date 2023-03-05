#include <llapi/mc/HitResult.hpp>
#include <llapi/HookAPI.h>

FaceID HitResult::getFacing() {
    return dAccess<FaceID>(this, ll::offset::HITRESULTAPI_getFacing);
}
Vec3 HitResult::getPos() {
    return dAccess<Vec3>(this, ll::offset::HITRESULTAPI_getPos);
}
bool HitResult::isHitLiquid() {
    return dAccess<bool>(this, ll::offset::HITRESULTAPI_isHitLiquid);
}
// LIAPI bool HitResult::isEntity() {
//     return getHitResultType() == HitResultType::ENTITY;
// }
// LIAPI bool HitResult::isTile() {
//     return getHitResultType() == HitResultType::TILE;
// }
BlockPos HitResult::getBlockPos() {
    return dAccess<BlockPos>(this, ll::offset::HITRESULTAPI_getBlockPos);
}
BlockPos HitResult::getLiquidPos() {
    return dAccess<BlockPos>(this, ll::offset::HITRESULTAPI_getLiquidPos);
}
FaceID HitResult::getLiquidFacing() {
    return dAccess<FaceID>(this, ll::offset::HITRESULTAPI_getLiquidFacing);
}
// LIAPI Vec3 HitResult::getLiquidHitPos();
// LIAPI HitResultType HitResult::getHitResultType() {
//     return dAccess<HitResultType>(this, 24);
// }

// static_assert(offsetof(HitResult, endBpos) == 32);
// static_assert(offsetof(HitResult, unk64) == 64);
// static_assert(offsetof(HitResult, unk81) == 81);
// static_assert(offsetof(HitResult, indirectHit) == 108);
// static_assert(sizeof(HitResult) == 112);