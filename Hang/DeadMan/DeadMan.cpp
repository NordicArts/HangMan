#include <DeadMan/DeadMan.hpp>

namespace NordicArts {
    DeadMan::DeadMan() {
    }
    
    void DeadMan::doLife(int iWrongGuesses) {
        switch (iWrongGuesses) {
            case 1:
                life11();
                break;

            case 2:
                life10();
                break;

            case 3:
                life9();
                break;

            case 4:
                life8();
                break;

            case 5:
                life7();
                break;

            case 6:
                life6();
                break;

            case 7:
                life5();
                break;

            case 8:
                life4();
                break;

            case 9:
                life3();
                break;

            case 10:
                life2();
                break;
            
            case 11:
                life1();
                break;

            case 12:
                loopDead();
                break;

            case 0:
            default:
                break;
        }
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
        std::cout << "|/   |" << std::endl;
        std::cout << "|    o" << std::endl;
        std::cout << "|   -|-" << std::endl;
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
        for (int i = 0; i < 3; i++) {
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
