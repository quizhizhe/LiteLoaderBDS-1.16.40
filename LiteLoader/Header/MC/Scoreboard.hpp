// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    Objective* mObjective;
    bool mValid;
    int mValue;
	
    Objective* getObjective() {
        return mObjective;
    }
    int getCount() {
        return mValue;
    }
};
#undef BEFORE_EXTRA

class Scoreboard {

#define AFTER_EXTRA
// Add new members to class
#define ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
public:

    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);
    //LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);

    /**
     * Get the score of the id in the specified objective.
     * 
     * @param  objname  Objective name
     * @param  id       ScoreboardId name(string)
     * @return int      The score
     * @throws std::invalid_argument  if the objective is not found
     *         std::runtime_error     if cannot get or create id/cannot get scores
     * @note   If there is not a ScoreboardId named `id`, it will create a new one
     */
    LIAPI static int getScore(const std::string& objname, const std::string& id);
    /**
     * Get the score of the id in the specified objective.
     *
     * @param      objname  Objective name
     * @param      id       ScoreboardId name(string)
     * @param[out] score    The score
     * @return     bool     Success or not
     * @note   If there is not a ScoreboardId named `id`, it will create a new one
     */
    LIAPI static bool getScore(const std::string& objname, const std::string& id, int& score);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    /**
     * Get the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @return int      The score
     * @throws std::invalid_argument  if the objective is not found
     *         std::runtime_error     if cannot get or create id/cannot get scores
     */
    LIAPI static int getScore(const std::string& objname, Player* player);
    LIAPI static int getScore(Player* player, const std::string& objname);
    /**
     * Get the score of the player in the specified objective.
     *
     * @param      objname  Objective name
     * @param      player   The player
     * @param[out] score    The score
     * @return     bool     Success or not
     */
    LIAPI static bool getScore(const std::string& objname, Player* player, int& score);
    /**
     * Set the score of the player in the specified objective.
     * 
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to set
     * @return bool     Success or not
     */
    LIAPI static bool setScore(const std::string& objname, Player* player, int value);
    LIAPI static bool setScore(Player* player, const std::string& objname, int value);
    /**
     * Add the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to add
     * @return bool     Success or not
     */
    LIAPI static bool addScore(const std::string& objname, Player* player, int value);
    LIAPI static bool addScore(Player* player, const std::string& objname, int value);
    /**
     * Reduce the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to reduce
     * @return bool     Success or not
     */
    LIAPI static bool reduceScore(const std::string& objname, Player* player, int value);
    LIAPI static bool reduceScore(Player* player, const std::string& objname, int value);
    /**
     * Delete the score of the player from the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @return bool     Success or not
     */
    LIAPI static bool deleteScore(const std::string& objname, Player* player);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    class Scoreboard& operator=(class Scoreboard const &) = delete;
    Scoreboard(class Scoreboard const &) = delete;
    Scoreboard() = delete;
#endif

public:
    /*0*/ virtual ~Scoreboard();
    /*1*/ virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum ObjectiveSortOrder);
    /*2*/ virtual class Objective * clearDisplayObjective(std::string const &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void onObjectiveRemoved(class Objective &);
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    MCVAPI struct ScoreboardId const & createScoreboardId(class Actor const &);
    MCVAPI struct ScoreboardId const & createScoreboardId(std::string const &);
    MCVAPI struct ScoreboardId const & createScoreboardId(class Player const &);
    MCVAPI void onObjectiveAdded(class Objective const &);
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    MCVAPI void onPlayerJoined(class Player const &);
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    MCVAPI void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    MCVAPI void setPacketSender(class PacketSender *);
    MCVAPI void tick();
    MCVAPI void writeToLevelStorage();
#endif
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    MCAPI class Objective * addObjective(std::string const &, std::string const &, class ObjectiveCriteria const &);
    MCAPI int applyPlayerOperation(bool &, std::vector<struct ScoreboardId> &, struct ScoreboardId const &, class Objective &, std::vector<struct ScoreboardId> &, class Objective &, enum CommandOperator);
    MCAPI class ObjectiveCriteria * getCriteria(std::string const &) const;
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const &) const;
    MCAPI class DisplayObjective const * getDisplayObjective(std::string const &) const;
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const &) const;
    MCAPI class Objective * getObjective(std::string const &) const;
    MCAPI std::vector<std::string> getObjectiveNames() const;
    MCAPI std::vector<class Objective const *> getObjectives() const;
    MCAPI struct ScoreboardId const & getScoreboardId(class Actor const &) const;
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    MCAPI class ScoreboardIdentityRef * getScoreboardIdentityRef(struct ScoreboardId const &);
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    MCAPI bool hasIdentityFor(struct ScoreboardId const &) const;
    MCAPI int modifyPlayerScore(bool &, struct ScoreboardId const &, class Objective &, int, enum PlayerScoreSetFunction);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, std::string const &);
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(class CompoundTag const &);
    MCAPI bool removeObjective(class Objective *);
    MCAPI void resetPlayerScore(struct ScoreboardId const &, class Objective &);
    MCAPI void resetPlayerScore(struct ScoreboardId const &);
    MCAPI static std::string const DEFAULT_CRITERIA;
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    MCAPI static char const * OBJECTIVES_ENUM;

//private:
    MCAPI void _initCriterias();

private:

};