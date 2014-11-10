#include <Includes.hpp>
#include <Player/Player.hpp>

namespace NordicArts{
    Player::Player(){};

    void Player::SetPlayerName(std::string cName) {
        m_cPlayerName = cName;
    }

    std::string Player::GetPlayerName() const {
        return m_cPlayerName;
    }

    void Player::IncrementPlayerLife(){
        m_iPlayerLife--;
    }

    int Player::GetPlayerLife() const {
        return m_iPlayerLife;
    }

}