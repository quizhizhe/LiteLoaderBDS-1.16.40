#include <llapi/mc/ReadOnlyBinaryStream.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/NbtIo.hpp>
#include <llapi/mc/IDataInput.hpp>
#include <llapi/mc/VarIntDataInput.hpp>

std::string const& ReadOnlyBinaryStream::getData() const {
    return *pBuf;
}

size_t ReadOnlyBinaryStream::getLength() const {
    return pBuf->size();
}

size_t ReadOnlyBinaryStream::getReadPointer() const {
    return readPointer;
}

size_t ReadOnlyBinaryStream::getUnreadLength() const {
    return getLength() - getReadPointer();
}

void ReadOnlyBinaryStream::setReadPointer(std::size_t size) {
    auto len = getLength();
    if (size <= len)
        readPointer = size;
    else
        readPointer = len;
}


std::unique_ptr<class CompoundTag> ReadOnlyBinaryStream::getCompoundTag() {
    // auto tag = CompoundTag::create();
    // class CompoundTag& (*rv)(class CompoundTag&, class ReadOnlyBinaryStream&);
    // *((void**)&rv) = dlsym("?read@?$serialize@VCompoundTag@@@@SA?AVCompoundTag@@AEAVReadOnlyBinaryStream@@@Z");
    // (*rv)(*tag, *this);
    VarIntDataInput pVTVarIntDataInput= VarIntDataInput(this);
    return std::move(NbtIo::read((IDataInput&)pVTVarIntDataInput));

}

// static_assert(offsetof(ReadOnlyBinaryStream, pBuf) == 56);