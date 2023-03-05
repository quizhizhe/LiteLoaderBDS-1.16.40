#include <llapi/mc/ServerPlayer.hpp>
#include <llapi/mc/GameMode.hpp>
#include <llapi/HookAPI.h>

ServerPlayer* GameMode::getPlayer() {
    return dAccess<ServerPlayer*, ll::offset::GAMEMODEAPI_getPlayer>(this);
}