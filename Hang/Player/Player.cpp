
#include "Player.hpp"

namespace NordicArts{

    void Player::Player(){};

    void Player::SetPlayerName(std::string name) {
        m_PlayerName = name;
    }

    std::string Player::GetPlayerName() {
        return m_PlayerName;
    }

    void Player::IncrementPlayerLife(){
        m_PlayerLife--;
    }

    int Player::GetPlayerLife(){
        return m_PlayerLife;
    }

}