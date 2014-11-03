#include <DeadMan/DeadMan.hpp>

namespace NordicArts {
    DeadMan::DeadMan() {
    }

    void DeadMan::life11() {
        std::cout << "__" << std::endl;
    }

    void DeadMan::life10() {
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life9() {
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life8() {
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life7() {
        std::cout << "--" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life6() {
        std::cout << "----" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life5() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life4() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "|  |" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life3() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life2() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    void DeadMan::life1() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| /" << std::endl;
    }

    void DeadMan::dead() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| / \\" << std::endl;
        std::cout << "__" << std::endl;
    }
};