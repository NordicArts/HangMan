#include <DeadMan/DeadMan.hpp>

namespace NordicArts {
    DeadMan::DeadMan() {
    }

    std::string DeadMan::life11() {
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life10() {
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life9() {
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life8() {
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life7() {
        std::cout << "--" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life6() {
        std::cout << "----" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life5() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life4() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "|  |" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life3() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life2() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "__" << std::endl;
    }

    std::string DeadMan::life1() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| /" << std::endl;
    }

    std::string DeadMan::dead() {
        std::cout << "----" << std::endl;
        std::cout << "|  o" << std::endl;
        std::cout << "| -|-" << std::endl;
        std::cout << "| / \\" << std::endl;
        std::cout << "__" << std::endl;
    }
};