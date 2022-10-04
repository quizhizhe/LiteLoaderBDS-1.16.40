// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandOutputParameter.hpp"
#include "CommandOrigin.hpp"
#include "Command.hpp"
#include "ServerPlayer.hpp"
#include "../Utils/PluginOwnData.h"
#include "../I18nAPI.h"

#define POD_COMMANDOUTPUT_LANGCODE ("_ll_plugin_cmdoutp_langcode_" + std::to_string((uint64_t)this))
#undef BEFORE_EXTRA

class CommandOutput {

#define AFTER_EXTRA
    // Add Member There
public:

    int getSuccessCount() const{
        //DayLockCommand::execute Line91
        return dAccess<int>(this,10);
    };

    void success(){
        int successCount = dAccess<int>(this,10);
        ++successCount;
        dAccess<int>(this,10) = successCount;
    };
    /**
     * @brief Output a message(without I18nBase).
     *
     * @param str  The message
     */
    LIAPI void addMessage(const std::string& str);
    /**
     * @brief Output a success message(without I18nBase).
     *
     * @param str  The message
     */
    LIAPI void success(const string& str);
    /**
     * @brief Output a success message(without I18nBase).
     *
     * @param str  The message
     */
    LIAPI void error(const string& str);

    /**
     * @brief Set the output language code of this CommandOutput object.
     *
     * @param code  The language code
     */
    inline void setLanguageCode(const std::string& code = "") {
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }
    /**
     * @brief Set the output language code of this CommandOutput object(convenience func).
     *
     * @param ori  The command origin object for the CommandOutput object
     */
    inline void setLanguageCode(const CommandOrigin& ori) {
        std::string code = "en_US";
        if (PluginOwnData::has(I18nBase::POD_KEY)) {
            auto& i18n = PluginOwnData::get<I18nBase>(I18nBase::POD_KEY);
            switch ((OriginType)ori.getOriginType()) {
                case OriginType::Player:
                    code = ori.getPlayer()->getLanguageCode();
                    break;
                default:
                    code = i18n.getDefaultLocaleName();
                    break;
            }
        }
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }

    /**
     * @brief Output a message(I18nBase, convenience func).
     *
     * @tparam Args    ...
     * @param  format  The str to translate and format
     * @param  args    The format arguments
     * @see    tr
     */
    template <typename... Args>
    inline void trAddMessage(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->addMessage(trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->addMessage(tr(format, std::forward<Args>(args)...));
    }

    /**
     * @brief Output a success message(I18nBase, convenience func).
     *
     * @tparam Args    ...
     * @param  format  The str to translate and format
     * @param  args    The format arguments
     * @see    tr
     */
    template <typename... Args>
    inline void trSuccess(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->success(trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->success(tr(format, std::forward<Args>(args)...));
    }

    /**
     * @brief Output a error message(I18nBase, convenience func).
     *
     * @tparam Args    ...
     * @param  format  The str to translate and format
     * @param  args    The format arguments
     * @see    tr
     */
    template <typename... Args>
    inline void trError(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->error(trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->error(tr(format, std::forward<Args>(args)...));
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUT
public:
    class CommandOutput& operator=(class CommandOutput const &) = delete;
    CommandOutput(class CommandOutput const &) = delete;
    CommandOutput() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDOUTPUT
#endif
    MCAPI CommandOutput(enum CommandOutputType);
    MCAPI void addToResultList(std::string const &, class Actor const &);
    MCAPI void error(std::string const &, std::vector<class CommandOutputParameter> const &);
    MCAPI void success(std::string const &, std::vector<class CommandOutputParameter> const &);
    MCAPI ~CommandOutput();

//private:
    MCAPI void addMessage(std::string const &, std::vector<class CommandOutputParameter> const &, enum CommandOutputMessageType);

private:

};