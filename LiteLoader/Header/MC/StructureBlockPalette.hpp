// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureBlockPalette {

#define AFTER_EXTRA
public:
    struct BlockPositionData {
        BlockPositionData() = delete;
        BlockPositionData(BlockPositionData const&) = delete;
        BlockPositionData(BlockPositionData const&&) = delete;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKPALETTE
public:
    class StructureBlockPalette& operator=(class StructureBlockPalette const &) = delete;
    StructureBlockPalette(class StructureBlockPalette const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREBLOCKPALETTE
#endif
    MCAPI StructureBlockPalette();
    MCAPI StructureBlockPalette(class StructureBlockPalette &&);
    MCAPI unsigned __int64 addMapping(std::unique_ptr<class CompoundTag>);
    MCAPI struct StructureBlockPalette::BlockPositionData const * getBlockPositionData(unsigned __int64) const;
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI ~StructureBlockPalette();

//protected:
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const &);
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const &, int);
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const &);
    MCAPI void _saveBlockPositionDataList(class CompoundTag &) const;

//private:
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};