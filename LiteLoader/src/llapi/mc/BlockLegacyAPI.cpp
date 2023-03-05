#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/ComposterBlock.hpp>
#include <llapi/HookAPI.h>

Block* BlockLegacy::toBlock(unsigned short tileData) {
    auto* bl = (Block*)&getStateFromLegacyData(tileData);
    // 某些方块在 tileData 太大时会变成其他方块，原版 /setblock 指令就存在这个问题（也有可能是被设计成这样的？）
    if (bl && &bl->getLegacyBlock() == (BlockLegacy*)this)
        return bl;
    return (Block*)&getRenderBlock();
}

string BlockLegacy::getTypeName() {
    return dAccess<string, ll::offset::BLOCKLEGACYAPI_getRuntimeId>(this);
}

bool BlockLegacy::applyBoneMeal(BlockSource* a1, BlockPos* a2) {
    auto vtbl = dlsym("??_7ComposterBlock@@6B@");
    if (*(void**)this == vtbl) {
        ((ComposterBlock*)this)->emitBoneMeal(*Global<Level>, *a1, *a2);
        return true;
    }
    return false;
}
