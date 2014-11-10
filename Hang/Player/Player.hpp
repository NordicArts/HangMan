#ifndef Player_H
#define Player_H

#include <Includes.hpp>

namespace NordicArts {


    class Player{

    private:
        int m_iPlayerLife = 12;
        std::string m_cPlayerName;

    protected:
    public:

    private:
    protected:
    public:
        Player();
        void SetPlayerName(std::string cName);
        std::string GetPlayerName() const;
        void IncrementPlayerLife();
        int GetPlayerLife() const;

    };


}


#endif
