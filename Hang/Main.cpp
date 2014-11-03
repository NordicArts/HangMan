#include <Main.hpp>
#include <DeadMan/DeadMan.hpp>

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

      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}