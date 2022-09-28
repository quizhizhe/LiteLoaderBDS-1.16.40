// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTagVariant.hpp"
enum class SnbtFormat : unsigned char
{
    PartialNewLine = 0,
    AlwayNewLine = 1,
    Minimize = 2,
};
struct PrettySnbtFormat;

#undef BEFORE_EXTRA

class CompoundTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    map<std::string, CompoundTagVariant> val;

public:

    LIAPI static std::unique_ptr<CompoundTag> create();
    LIAPI map<std::string, CompoundTagVariant>& value();

    template <typename T>
    inline T const* get(class gsl::basic_string_span<char const, -1> key) const {
        return (T*)get(key);
    };

    // put value
    LIAPI void putEnd(std::string key);
    LIAPI double& putDouble(std::string key, double val);
    LIAPI void putByteArray(std::string key, char data[], size_t size);
    LIAPI void putIntArray(std::string key, int data[], size_t size);
    LIAPI struct TagMemoryChunk& putIntArray(std::string key, struct TagMemoryChunk val);

    // get value
    LIAPI double getDouble(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI struct TagMemoryChunk const& getIntArray(class gsl::basic_string_span<char const, -1> key) const;

    // get tag
    LIAPI class ByteTag const* getByteTag(class gsl::basic_string_span<char const, -1> key) const;
    //BDS has implemented this interface
    //LIAPI class ShortTag const* getShortTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class FloatTag const* getFloatTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class DoubleTag const* getDoubleTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ByteArrayTag const* getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    //LIAPI class StringTag const* getStringTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class IntArrayTag const* getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ListTag const* getListTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class CompoundTag const* getCompoundTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class Tag* operator[](class gsl::basic_string_span<char const, -1> key);

    // IO
    LIAPI void setItemStack(ItemStack* item);
    LIAPI void setBlock(Block* blk);
    LIAPI bool setActor(Actor* actor) const;
    LIAPI bool setPlayer(Player* player);
    LIAPI bool setBlockActor(BlockActor* ble) const;
    LIAPI static std::unique_ptr<CompoundTag> fromItemStack(ItemStack* item);
    LIAPI static std::unique_ptr<CompoundTag> fromBlock(Block* blk);
    LIAPI static std::unique_ptr<CompoundTag> fromActor(Actor* actor);
    LIAPI static std::unique_ptr<CompoundTag> fromPlayer(Player* player);
    LIAPI static std::unique_ptr<CompoundTag> fromBlockActor(BlockActor* ble);

    // To Formatted SNBT
    LIAPI std::string toSNBT(int indent, SnbtFormat snbtFormat = SnbtFormat::PartialNewLine);
    LIAPI string toPrettySNBT(bool forPlayer = false) const;
    LIAPI string toPrettySNBT(struct PrettySnbtFormat const& format) const;
    LIAPI std::string toBinaryNBT(bool isLittleEndian = true);
    LIAPI static std::string nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> tags, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromSNBT(const std::string& snbt);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, bool isLittleEndian = true);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromBinary(std::string const& data, bool isLittleEndian = true);

    LIAPI std::string toNetworkNBT() const;
    LIAPI static std::unique_ptr<CompoundTag> fromNetworkNBT(std::string const& data);
    LIAPI static std::string nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> tags);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromNetwork(std::string const& data);


    // Deprecated?
    LIAPI std::string toSNBT();

    inline Tag const * get(class gsl::basic_string_span<char const, -1> key) const{
        auto iter = val.find(key.data());
        if(iter != val.end())
            return iter->second.get();
    };

    inline bool isEmpty(){
        return this->val.empty();
    }

    inline map<std::string, CompoundTagVariant>::const_iterator begin(){
        return this->val.begin();
    } 
    inline map<std::string, CompoundTagVariant>::const_iterator end(){
        return this->val.end();
    } 
    

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAG
public:
    class CompoundTag& operator=(class CompoundTag const &) = delete;
    CompoundTag(class CompoundTag const &) = delete;
#endif

public:
    /*0*/ virtual ~CompoundTag();
    /*2*/ virtual void write(class IDataOutput &) const;
    /*3*/ virtual void load(class IDataInput &);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const &) const;
    /*8*/ virtual void print(std::string const &, class PrintStream &) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAG
#endif
    MCAPI CompoundTag();
    MCAPI CompoundTag(class CompoundTag &&);
    MCAPI void append(class CompoundTag const &);
    MCAPI std::unique_ptr<class CompoundTag> clone() const;
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>) const;
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>, enum Tag::Type) const;
    MCAPI void deepCopy(class CompoundTag const &);
    MCAPI bool getBoolean(class gsl::basic_string_span<char const, -1>) const;
    MCAPI unsigned char getByte(class gsl::basic_string_span<char const, -1>) const;
    MCAPI struct TagMemoryChunk const & getByteArray(class gsl::basic_string_span<char const, -1>) const;
    MCAPI class CompoundTag * getCompound(class gsl::basic_string_span<char const, -1>);
    MCAPI class CompoundTag const * getCompound(class gsl::basic_string_span<char const, -1>) const;
    MCAPI float getFloat(class gsl::basic_string_span<char const, -1>) const;
    MCAPI int getInt(class gsl::basic_string_span<char const, -1>) const;
    MCAPI __int64 getInt64(class gsl::basic_string_span<char const, -1>) const;
    MCAPI class ListTag * getList(class gsl::basic_string_span<char const, -1>);
    MCAPI class ListTag const * getList(class gsl::basic_string_span<char const, -1>) const;
    MCAPI short getShort(class gsl::basic_string_span<char const, -1>) const;
    MCAPI std::string const & getString(class gsl::basic_string_span<char const, -1>) const;
    MCAPI class CompoundTag & operator=(class CompoundTag &&);
    MCAPI class Tag * put(std::string, std::unique_ptr<class Tag>);
    MCAPI void putBoolean(std::string, bool);
    MCAPI unsigned char & putByte(std::string, unsigned char);
    MCAPI struct TagMemoryChunk & putByteArray(std::string, struct TagMemoryChunk);
    MCAPI class CompoundTag & putCompound(std::string, class CompoundTag);
    MCAPI class CompoundTag * putCompound(std::string, std::unique_ptr<class CompoundTag>);
    MCAPI float & putFloat(std::string, float);
    MCAPI int & putInt(std::string, int);
    MCAPI __int64 & putInt64(std::string, __int64);
    MCAPI short & putShort(std::string, short);
    MCAPI std::string & putString(std::string, std::string);
    MCAPI bool remove(class gsl::basic_string_span<char const, -1>);

};