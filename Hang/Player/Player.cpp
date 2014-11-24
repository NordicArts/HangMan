#include <Includes.hpp>
#include <Player/Player.hpp>

namespace NordicArts{
    Player::Player(){};

    void Player::setPlayerName(std::string cName) {
        m_cPlayerName = cName;
    }

    std::string Player::getPlayerName() const {
        return m_cPlayerName;
    }

    void Player::incrementPlayerLife(){
        m_iPlayerLife--;
    }

    int Player::getPlayerLife() const {
        return m_iPlayerLife;
    }

}
