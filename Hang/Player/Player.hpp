#ifndef Player_H
#define Player_H

#include <Includes.hpp>

namespace NordicArts {


    class Player{

    private:
        int m_PlayerLife = 12;
        std::string m_PlayerName;

    protected:
    public:

    private:
    protected:
    public:
        Player();
        void SetPlayerName(std::string name);
        std::string GetPlayerName();
        void IncrementPlayerLife();
        int GetPlayerLife();

    };


}


#endif
