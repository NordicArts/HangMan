#include "Player.hpp"

namespace NordicArts{

    void Player::Player(){};

    void Player::SetPlayerName(std::string name) {
        m_PlayerName = name;
    }

    std::string Player::GetPlayerName() {
        return m_PlayerName;
    }

    void IncrementPlayerLife(){
        return PlayerLife--;
    }

    int GetPlayerLife(){
        return PlayerLife;
    }

}