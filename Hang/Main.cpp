#include <Main.hpp>
#include <DeadMan/DeadMan.hpp>
#include <Words/Words.hpp>

namespace NordicArts {
  int Main() {
      DeadMan oDead;
      DeadMan *pDead = &oDead;

      pDead->life11();
      pDead->life10();
      pDead->life9();
      pDead->life8();
      pDead->life7();
      pDead->life6();
      pDead->life5();
      pDead->life4();
      pDead->life3();
      pDead->life2();
      pDead->life1();
      pDead->dead();

      Words oWords;
      Words *pWords = &oWords;

      std::cout << pWords->GetWord() << std::endl;

      //pDead->loopDead();

      std::cout << std::endl << NordicOS::getBuildNumber() << std::endl;

      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}
