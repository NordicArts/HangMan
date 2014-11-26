#include <Includes.hpp>
#include <Player/Player.hpp>

namespace NordicArts{
    Player::Player(){};

    void Player::setName(std::string cName) {
        m_cName = cName;
    }

    std::string Player::getName() const {
        return m_cName;
    }

    void Player::decrementLife() {
        m_iLife--;
    }

    void Player::incrementLife(){
        m_iLife++;
    }

    int Player::getLife() const {
        return m_iLife;
    }

    bool Player::alive() const {
        bool bReturn = false;

        if (m_iLife >= 1) {
            bReturn = true;
        }

        return bReturn;
    }
}
