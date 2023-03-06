#pragma once
#include <cstdint>
#include <utility>

/*
 * 偏移量命名规则：使用的文件名_函数名_(如有多个)第几个使用或者知道的成员名
 * */

namespace ll{
    namespace offset{

        // ->header/llapi/mc

        // Null
        constexpr uint64_t ATTRIBUTE_getName = 0x8;
        // BaseCommandBlock::_setCommand a4 is Command
        constexpr uint64_t BASECOMMANDBLOCK_getCommand = 0x38;
        // ItemStackBase::init(ItemStackBase*, BlockLegacy *, int) Line14
        constexpr uint64_t BLOCKLEGAC_getBlockItemId = 0x10C;
        // LevelChunk::_removeCallbacks Line28
        constexpr uint64_t BLOCKLEGAC_getBlockEntityType = 0xA8;
        // Null
        constexpr uint64_t BLOCKSOURCE_getDimension = 0x20;
        // BegGoal::canUse Line6
        constexpr uint64_t BLOCKSOURCE_getDimensionConst = 0x328;
        // DayLockCommand::execute Line91
        constexpr uint64_t COMMANDOUTPUT_getSuccessCount = 0x28;
        // Null
        constexpr uint64_t COMPOUNDTAGVARIANT_getTagType = 0x28;
        // ExplorationMapFunction::apply Line57
        constexpr uint64_t DIMENSION_getBlockSourceFromMainChunkSource = 0x48;
        // Null
        constexpr uint64_t DIMENSION_getHeight = 0xCA;
        // Player::checkSpawnBlock Line19
        constexpr uint64_t DIMENSION_getDimensionId = 0xC0;
        // ItemRegistry::registerItem Line25
        constexpr uint64_t ITEM_getFullItemName = 0xD8;
        // Null
        constexpr uint64_t LEVEL_getSpawner = 0x7B0;
        // CommandAreaFactory::_getArea Line156
        constexpr uint64_t LEVELCHUNK_getLastTick = 0x90;
        // lambda_b490644342a3912d59dc52eb79c3a67f_::operator() Line410
        constexpr uint64_t MINECRAFT_getNetworkHandler = 0x18;
        // mob::die Line83
        constexpr uint64_t MOB_getDead = 0x73A;
        // EffectCommand::execute Line247
        constexpr uint64_t MOBEFFECT_getResourceName = 0x50;
        // MobEffect::MobEffect Line43
        constexpr uint64_t MOBEFFECT_getComponentName = 0x98;
        // ScoreboardCommand::applyPlayerOperation Line186
        constexpr uint64_t OBJECTIVE_getName = 0x40;
        // Objective::serialize Line55
        constexpr uint64_t OBJECTIVE_getDisplayName = 0x60;
        // Null
        constexpr uint64_t PACKET_OBJECTIVE_getDisplayName = 0x10;
        // AddPlayerPacket::AddPlayerPacket Line58
        constexpr uint64_t PLAYER_getDeviceId = 0x1EC0;
        // Actor::onAboveBubbleColumn Line5 照抄的，不知行不行
        constexpr uint64_t PLAYER_isFlying_1 = 0x8B4;
        constexpr uint64_t PLAYER_isFlying_2 = 0x8B8;
        constexpr uint64_t PLAYER_isFlying_3 = 0x914;
        constexpr uint64_t PLAYER_isFlying_4 = 0x918;
        // PropertiesSettings::PropertiesSettings Line550
        constexpr uint64_t PROPERTIESSETTINGS_useOnlineAuthentication = 0x1A1;
        // PropertiesSettings::PropertiesSettings Line518
        constexpr uint64_t PROPERTIESSETTINGS_getLevelName = 0x20;
        // Null
        constexpr uint64_t RAKNET_getAdr = 0x8;
        // ResourcePackRepository::_initializeWorldPackSource Line62
        constexpr uint64_t RESOURCEPACKREPOSITORY_getPackSourceFactory = 0x170;
        // ServerScoreboard::_unpackIdentityDefToScorePacket Line30~31 16+72
        constexpr uint64_t SCOREBOARDIDENTITYREF_getIdentityType = 0x58;

        // ->src/EventAPI

        // Null
        constexpr uint64_t EVENTAPI_PlayerInteractEntity_1 = 0x68;
        // Null
        constexpr uint64_t EVENTAPI_PlayerInteractEntity_2 = 0x70;
        // Hopper::Hopper
        constexpr uint64_t EVENTAPI_HopperSearchItem = 0x5;

        // ->src/llapi/mc

        // Null
        constexpr uint64_t BIOMEAPI_getID = 0x78;
        // Null
        constexpr uint64_t BIOMEAPI_getName = 0x8;
        // Null
        constexpr uint64_t BLOCKAPI_getTileData = 0x8;
        // Actor::_playFlySound Line7
        constexpr uint64_t BLOCKAPI_getRuntimeId = 0x30;
        // Null
        constexpr uint64_t BLOCKLEGACYAPI_getRuntimeId = 0x80;
        // Container::Container
        constexpr uint64_t CONTAINERAPI_getTypeName= 0x8;
        // Null
        constexpr uint64_t GAMEMODEAPI_getPlayer= 0x8;
        // Null
        constexpr uint64_t HITRESULTAPI_getFacing= 0x1C;
        // Null
        constexpr uint64_t HITRESULTAPI_getPos= 0x2C;
        // Null
        constexpr uint64_t HITRESULTAPI_isHitLiquid= 0x50;
        // Null
        constexpr uint64_t HITRESULTAPI_getBlockPos= 0x20;
        // Null
        constexpr uint64_t HITRESULTAPI_getLiquidPos= 0x54;
        // Null
        constexpr uint64_t HITRESULTAPI_getLiquidFacing= 0x51;
        // Player::take Line127
        constexpr uint64_t ITEMACTORAPI_getItemStack= 0x620;
        // ItemActor::NormalTick Line258
        constexpr uint64_t ITEMACTORAPI_getDespawnTime = 0x6C4;
        // ItemActor::NormalTick Line258 也许是？
        constexpr uint64_t ITEMACTORAPI_getLatestSpawnTime = 0x6B0;
        // Null
        constexpr uint64_t ITEMSTACKAPI_getCount = 0x22;
        // MovingBlockActor::load Line69
        constexpr uint64_t LEVELAPI_getBlockPalettePtr = 0x7D0;
        // ServerPlayer::isHostingPlayer
        constexpr uint64_t PLAYERAPI_getNetworkIdentifier = 0x980;
        // KickCommand::_kickPlayer Line116
        constexpr uint64_t PLAYERAPI_getCertificate = 0xAB0;
        // AddPlayerPacket::AddPlayerPacket Line59
        constexpr uint64_t PLAYERAPI_getPlatform = 0x838;
        // InventoryContainerModel::_getContainer  2928 + 176
        constexpr uint64_t PLAYERAPI_getInventory = 0xC20;
        // ServerNetworkHandler::_sendLevelData Line316
        constexpr uint64_t PLAYERAPI_getSpawnPosition = 0x1C14;
        // ServerNetworkHandler::_sendLevelData Line310
        constexpr uint64_t PLAYERAPI_getSpawnDimension = 0x1C20;
        // Null
        constexpr uint64_t PLAYERAPI_getClientUUID = 0xAA0;
        // ServerPlayer::sendNetworkPacket 参4
        constexpr uint64_t PLAYERAPI_getClientSubId = 0xDC0;
        // Null
        constexpr uint64_t PLAYERAPI_crashClient = 0X38;
        // Null
        constexpr uint64_t PLAYERAPI_sendTransferPacket_port = 0X24;
        // Null
        constexpr uint64_t PLAYERAPI_sendTransferPacket_address = 0X28;
        // Null
        constexpr uint64_t PLAYERAPI_sendSetScorePacket_type = 0X30;
        // Null
        constexpr uint64_t PLAYERAPI_sendSetScorePacket_data = 0X38;
        // Null
        constexpr uint64_t PLAYERAPI_sendCommandRequestPacket_cmd = 0X30;
        // Null
        constexpr uint64_t RESOURCEPACKREPOSITORYAPI_setCustomResourcePackPath = 0x30;

        // ->src/llapi/nbt

        // Block::Block?
        constexpr uint64_t COMPOUNDTAGAPI_fromBlock = 0x18;
    }
}

