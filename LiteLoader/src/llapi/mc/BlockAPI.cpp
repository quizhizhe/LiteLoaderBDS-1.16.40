#include <llapi/LoggerAPI.h>
#include <liteloader/LiteLoader.h>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/BlockPalette.hpp>
#include <llapi/mc/BlockSerializationUtils.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/HashedString.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/HookAPI.h>

Block* Block::create(const string& name, unsigned short tileData) {
    BlockPalette* generator = Global<Level>->getBlockPalettePtr();
    auto blk = generator->getBlockLegacy(name);
    if (!blk)
        return nullptr;
    return (Block*)((BlockLegacy*)blk)->toBlock(tileData);
}

Block* Block::create(CompoundTag* nbt) {
    // pair<enum BlockSerializationUtils::NBTState, Block*>
    auto result = BlockSerializationUtils::tryGetBlockFromNBT(*nbt, nullptr);
    return const_cast<Block*>(result);
}

string Block::getTypeName() const {
    return Block::toDebugString();
}


 int Block::getId() const {
     return getLegacyBlock().getBlockItemId();
 }

unsigned short Block::getTileData() {
    // 等待大佬改进
    auto tileData = dAccess<unsigned short, 8>(this);
    auto blk = &getLegacyBlock();

    if (((BlockLegacy*)blk)->toBlock(tileData) == (Block*)this) {
        return tileData;
    }

    for (unsigned short i = 0; i < 16; ++i) {
        if (i == tileData) {
            continue;
        }
        if (((BlockLegacy*)blk)->toBlock(i) == (Block*)this) {
            return i;
        }
    }
    logger.error("Error in GetTileData");
    return 0;
}

std::unique_ptr<CompoundTag> Block::getNbt() {
    return CompoundTag::fromBlock(this);
}

bool Block::setNbt(CompoundTag* nbt) {
    nbt->setBlock(this);
    return true;
}

unsigned int const & Block::getRuntimeId() const{
    // Actor::_playFlySound Line7
    return dAccess<unsigned int>(this, 48);
}