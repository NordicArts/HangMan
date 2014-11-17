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

      for(auto it: pWords->GetLevels()){

          std::cout << it << std::endl;
      }

      for (int i = 0; i < 5; i++) {
          std::cout << pWords->GetWord(3).cWord << std::endl;
      }

      if (pWords->CheckLetter("A")) { std::cout << "A exists" << std::endl; }
      if (pWords->CheckLetter("Z")) {
          std::cout << "Z exists" << std::endl;
      } else {
          std::cout << "Z doesn't exist" << std::endl;
      }

      //pDead->loopDead();

      std::cout << std::endl << NordicOS::getBuildNumber() << std::endl;

      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}
