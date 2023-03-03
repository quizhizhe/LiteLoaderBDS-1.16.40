#include <llapi/mc/CommandOrigin.hpp>
#include <llapi/mc/Actor.hpp>
#include <llapi/mc/CompoundTag.hpp>

 ServerPlayer* CommandOrigin::getPlayer() const {
     Actor* origin = getEntity();
     return origin->isPlayer() ? (ServerPlayer*)origin : nullptr;
 }
// CompoundTag CommandOrigin::serialize_1() const {
//     CompoundTag tag;
//     tag.putByte("OriginType",getOriginType());
//     return tag;
// };