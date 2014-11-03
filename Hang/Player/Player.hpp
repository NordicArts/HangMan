#ifndef Player_H
#define Player_H

#include <bits/stringfwd.h>
#include <bits/basic_string.h>

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
        void Player();
        void SetPlayerName(std::string name);
        std::string GetPlayerName();
        void IncrementPlayerLife();
        int GetPlayerLife();

    };


}


#endif
