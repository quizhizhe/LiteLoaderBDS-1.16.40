## [LiteLoader Release Note]
LiteLoaderBDS-408.0.0 update has been released, adapted 1.16.40.02, ProtocolVersion 408
Change the version number format to: Protocol.Minor.Patch

## [Add]
- Add Player::getClientUUID
- Add Command::getPlayerFromOrigin
- Add Level::getPlayer(mce::UUID)

## [Fix]
- Fix mce::UUID::isEmpty
- Fix BlockSource::getDimensionId
- Fix AABB::getCenter()
- Fix CompoundTag::fromBlock(Block* block)
- Fix BlockLegacy::getBlockItemId()

## [Other]
- remove not use action
- 补全Actor类
- 添加WE缺失的文件
- 替换偏移获取