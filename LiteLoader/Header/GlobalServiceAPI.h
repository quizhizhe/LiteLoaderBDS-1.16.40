#pragma once

// Types
namespace RakNet {
class RakPeer;
};
class Level;
class CommandRegistry;
class Minecraft;
class MinecraftCommands;
class RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;
class DBStorage;
class Scoreboard;
class AllowListFile;
class PropertiesSettings;
class ResourcePackRepository;
class LevelStorage;
class NetworkHandler;

template <typename T>
LIAPI inline T* Global = nullptr;
