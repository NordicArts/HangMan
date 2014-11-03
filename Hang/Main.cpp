#include "Main.hpp"

namespace NordicArts {
  int Main() {
      std::cout << "----" << std::endl;
      std::cout << "|  o" << std::endl;
      std::cout << "| -|-" << std::endl;
      std::cout << "| / \\" << std::endl;
      std::cout << "__" << std::endl;

      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}