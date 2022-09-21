// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DBChunkStorage : public ChunkSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBCHUNKSTORAGE
public:
    class DBChunkStorage& operator=(class DBChunkStorage const &) = delete;
    DBChunkStorage(class DBChunkStorage const &) = delete;
    DBChunkStorage() = delete;
#endif

public:
    /*0*/ virtual ~DBChunkStorage();
    /*1*/ virtual void shutdown();
    /*2*/ virtual bool isShutdownDone();
    /*7*/ virtual bool postProcess(class ChunkViewSource &);
    /*8*/ virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    /*9*/ virtual void loadChunk(class LevelChunk &, bool);
    /*11*/ virtual bool saveLiveChunk(class LevelChunk &);
    /*12*/ virtual void hintDiscardBatchBegin();
    /*13*/ virtual void hintDiscardBatchEnd();
    /*14*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*16*/ virtual void flushPendingWrites();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBCHUNKSTORAGE
#endif
    MCAPI DBChunkStorage(std::unique_ptr<class ChunkSource>, class DBStorage &, class Scheduler &);

//private:
    MCAPI class std::shared_ptr<class LevelStorageWriteBatch> _getBuffer();
    MCAPI bool _hasChunk(class DBChunkStorageKey const &);
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const &);
    MCAPI void _loadAndBlendFromDB(class LevelChunk &);
    MCAPI bool _loadChunkFromDB(class LevelChunk &);
    MCAPI void _serializeChunk(class LevelChunk &, class LevelStorageWriteBatch &);
    MCAPI void _writeBatch();

private:
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch, class std::allocator<class LevelStorageWriteBatch>> threadBatch;
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string, class std::allocator<std::string>> threadBuffer;

};