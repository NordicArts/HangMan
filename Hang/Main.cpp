#include <Main.hpp>
#include <DeadMan/DeadMan.hpp>

namespace NordicArts {
  int Main() {
      DeadMan oDead;
      DeadMan *pDead = &oDead;

      pDead->dead();



      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}