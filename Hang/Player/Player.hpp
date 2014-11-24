#ifndef NordicArts_HangMan_Player_H
#define NordicArts_HangMan_Player_H

#include <Includes.hpp>

namespace NordicArts {
    class Player {
    // Variables
    public:
    protected:
    private:
        int m_iPlayerLife = 12;

        std::string m_cPlayerName;

    // Methods
    public:
        Player();

        void setPlayerName(std::string cName);
        void incrementPlayerLife();

        std::string getPlayerName() const;

        int getPlayerLife() const;

    protected:
    private:
    };
};
#endif
