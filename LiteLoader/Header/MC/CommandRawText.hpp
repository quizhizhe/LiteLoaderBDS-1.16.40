/**
 * @file  CommandRawText.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#include "../Global.h"

class CommandRawText {

#define AFTER_EXTRA
// Add Member There
    std::string text;

public:
inline operator std::string()const
{
    return text;
}

std::string const & getText() const{
    return this->text;
}
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRAWTEXT
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRAWTEXT
public:
    class CommandRawText& operator=(class CommandRawText const &) = delete;
    CommandRawText(class CommandRawText const &) = delete;
    CommandRawText() = delete;
#endif
};