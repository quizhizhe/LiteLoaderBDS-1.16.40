#include <llapi/mc/ResourcePack.hpp>
#include <llapi/mc/ResourcePackRepository.hpp>
#include <llapi/mc/CompositePackSource.hpp>
#include <llapi/mc/PackSourceFactory.hpp>
#include <llapi/mc/PackSource.hpp>
#include <llapi/HookAPI.h>

 void ResourcePackRepository::setCustomResourcePackPath(PackType type, const std::string& path) {
     auto CompositePack = dAccess<CompositePackSource*>(this, ll::offset::RESOURCEPACKREPOSITORYAPI_setCustomResourcePackPath);
     auto PackSourceFactory = getPackSourceFactory();
     auto& DirectoryPackSource = PackSourceFactory->createDirectoryPackSource(Core::Path(path), type, PackOrigin::PackOrigin_Dev, 0);
     CompositePack->addPackSource((PackSource*)&DirectoryPackSource);
     refreshPacks();
 }