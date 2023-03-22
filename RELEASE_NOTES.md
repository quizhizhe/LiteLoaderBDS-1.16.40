# Release 408.3.0

![BDS 1.16.40.02](https://img.shields.io/badge/BDS-1.16.40.02-blue?style=for-the-badge)&emsp;![Protocol 408](https://img.shields.io/badge/Protocol-408-orange?style=for-the-badge)

## Added

* 添加`ActorBlockSyncMessage`结构
* 添加`Potion::PotionType`成员
* 添加`Potion::PotionVariant`成员

## Changed

* 集中偏移量到一个头文件
* 规范`EventAPI.h`里变量命名
* 补全`Explosion`类
* 补全`HitResult`类
* 部分补全`LevelContainerModel`类

## Fixed

* 修复`PlayerDropItem`事件
* 修复`BlockExploded`事件
* 修复`ContainerChange`事件，未测试，可能有问题
* 修复`ProjectileHitBlock`事件
* 修复`MobHurt`事件
* 修复`ProjectileHitEntity`事件
* 修复`ProjectileSpawn`事件
* 修复`SetScorePacket`类
* 修复`TransferPacket`类
* 修复`SetDisplayObjectivePacket`类
* 修正`HitResult::getEntity`函数

## Other

* 已发布到Tooth库，可使用[Lip](https://github.com/LiteLDev/Lip)或者[LipUI](https://github.com/LiteLDev/LipUI)进行安装

**Full Changelog**: https://github.com/quizhizhe/LiteLoaderBDS-1.16.40/compare/408.2.0...408.3.0