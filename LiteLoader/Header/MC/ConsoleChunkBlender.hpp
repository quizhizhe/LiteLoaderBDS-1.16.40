// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ConsoleChunkBlender {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLECHUNKBLENDER
public:
    class ConsoleChunkBlender& operator=(class ConsoleChunkBlender const &) = delete;
    ConsoleChunkBlender(class ConsoleChunkBlender const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSOLECHUNKBLENDER
#endif
    MCAPI ConsoleChunkBlender();
    MCAPI void blendChunkEnd4J(class LevelChunk &, class LevelChunk &);
    MCAPI void blendChunkNether4J(class LevelChunk &, class LevelChunk &);
    MCAPI void blendChunkOverworld(class LevelChunk &, class LevelChunk &);

//protected:
    MCAPI void _copyColumnFromGeneratedChunkNether(class LevelChunk &, class LevelChunk &, int, int);
    MCAPI void _copyColumnFromGeneratedChunkOverworld(class LevelChunk &, class LevelChunk &, int, int);
    MCAPI int _findHighestStoneOrBedrockHeight(class LevelChunk &, int, int);
    MCAPI int _findTopMostWaterHeight(class LevelChunk &, int, int);
    MCAPI void _prepInterpTable();
    MCAPI void _shiftColumnBySetBlocks(class LevelChunk &, int, int, int, int);

protected:
    MCAPI static std::unique_ptr<class PerlinSimplexNoise> sConversionBlendNoise;

};