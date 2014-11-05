#include <DeadMan/DeadMan.hpp>

namespace NordicArts {
    DeadMan::DeadMan() {
    }

    void DeadMan::cleanIt(int iTime) {
        std::cout << "\x1B[2J\x1B[H";
        std::this_thread::sleep_for(std::chrono::milliseconds(iTime));
    }        

    void DeadMan::life11() {
        cleanIt(100);
        std::cout << "___" << std::endl << std::endl;
    }

    void DeadMan::life10() {
        cleanIt(100);
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life9() {
        cleanIt(100);
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life8() {
        cleanIt(100);
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life7() {
        cleanIt(100);
        std::cout << "___" << std::endl;
        std::cout << "|/ " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life6() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/ " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life5() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life4() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "|    |" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;;
    }

    void DeadMan::life3() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "|   -|" << std::endl;
        std::cout << "| " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::life2() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/  |" << std::endl;
        std::cout << "|   o" << std::endl;
        std::cout << "|  -|-" << std::endl;
        std::cout << "|" << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;;
    }
    void DeadMan::life1() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "|   -|-" << std::endl;
        std::cout << "|   /" << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::dead() {
        cleanIt(100);
        std::cout << "______" << std::endl;
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "|   -|-" << std::endl;
        std::cout << "|   / \\ " << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::loopDead() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 4; j++) {
                cleanIt(500);
                if (j == 1) {
                    loop1();
                } else if (j == 3) {
                    loop3();
                } else { 
                    loop2();
                }
            }
        }
        cleanIt(200);
        loop2();
    }

    void DeadMan::loop1() {
        std::cout << "______" << std::endl;
        std::cout << "|/   /" << std::endl;
        std::cout << "|   o "<< std::endl;
        std::cout << "| -/-" << std::endl;
        std::cout << "| /|" << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }

    void DeadMan::loop2() {
        dead();
    }

    void DeadMan::loop3() {
        std::cout << "______" << std::endl;
        std::cout << "|/   \\" << std::endl;
        std::cout << "|      o" << std::endl;
        std::cout << "|     -\\-" << std::endl;
        std::cout << "|      |\\" << std::endl;
        std::cout << "|\\_" << std::endl << std::endl;
    }
};
