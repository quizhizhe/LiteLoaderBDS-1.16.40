// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "IFileChunkUploader.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerFileChunkUploader : public IFileChunkUploader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERFILECHUNKUPLOADER
public:
    class ServerFileChunkUploader& operator=(class ServerFileChunkUploader const &) = delete;
    ServerFileChunkUploader(class ServerFileChunkUploader const &) = delete;
    ServerFileChunkUploader() = delete;
#endif

public:
    /*0*/ virtual ~ServerFileChunkUploader();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void initFileUploader(std::string const &, struct FileInfo const &, int, class Json::Value const &, class std::function<void (bool)>);
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const &, class std::function<void (std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void uploadChunk(struct FileInfo const &, struct FileChunkInfo const &, std::vector<unsigned char> const &, class std::function<void (bool)>);
    /*7*/ virtual bool canCancelUpload(struct FileInfo const &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual float getUploadProgress(struct FileInfo const &) const;
    /*10*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERFILECHUNKUPLOADER
    MCVAPI void cancelUpload(struct FileInfo const &);
    MCVAPI void confirmChunkReceived(struct FileInfo const &, struct FileChunkInfo const &);
    MCVAPI void update();
#endif

};