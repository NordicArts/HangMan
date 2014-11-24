#ifndef NordicArts_HangMan_Player_H
#define NordicArts_HangMan_Player_H

#include <Includes.hpp>

namespace NordicArts {
    class Player {
    // Variables
    public:
    protected:
    private:
        int m_iLife = 12;

        std::string m_cName;

    // Methods
    public:
        Player();

        void setName(std::string cName);
        void incrementLife();

        std::string getName() const;

        int getLife() const;

    protected:
    private:
    };
};
#endif
