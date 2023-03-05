#include <llapi/Global.h>
#include <llapi/mc/ItemActor.hpp>
#include <llapi/HookAPI.h>

ItemStack* ItemActor::getItemStack() {
    return dAccess<ItemStack*>(this, ll::offset::ITEMACTORAPI_getItemStack); // IDA Player::take Line127
}

int ItemActor::getDespawnTime() {
    return dAccess<int, ll::offset::ITEMACTORAPI_getDespawnTime>(this); // ItemActor::NormalTick Line258
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, ll::offset::ITEMACTORAPI_getDespawnTime>(this) = a1;
    return true;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, ll::offset::ITEMACTORAPI_getLatestSpawnTime>(this);
}