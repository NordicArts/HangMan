#include <Main.hpp>
#include <DeadMan/DeadMan.hpp>
#include <Words/Words.hpp>
#include <Player/Player.hpp>
#include <Guesses/Guesses.hpp>

namespace NordicArts {
    int Main() {
        // Word
        WordStruct sWord;

        // Words Class
        Words  oWords;
        Words *pWords = &oWords;

        // Player Class
        Player  oPlayer;
        Player *pPlayer = &oPlayer;

        // Get the Player Name
        std::cout << "Enter Name:" << std::endl;
        std::string cInput;
        getline(std::cin, cInput);
        pPlayer->setName(cInput);

        // Choose Level
        std::cout << "Choose Level:" << std::endl;
        for (auto it : pWords->getLevels()) {
            std::cout << it << ", ";
        }
        std::cout << std::endl;
        getline(std::cin, cInput);
        int iLevel;
        iLevel = atoi(cInput.c_str());
        sWord = pWords->getWord(iLevel);

        // Guesses
        Guesses  oGuess(pWords);
        Guesses *pGuess = &oGuess;

        // DeadMan
        DeadMan  oDead;
        DeadMan *pDead = &oDead;
        
        while (true) {
            // Do Guess
            std::cout << "Guess Letter:" << std::endl;
            getline(std::cin, cInput);
            if (pGuess->doGuess(cInput)) {
                std::cout << "Yey" << std::endl;
            } else {
                pPlayer->decrementLife();
                std::cout << "Nope" << std::endl;
            }

            // Get the Wrong Guesses
            pDead->doLife(pGuess->wrongGuesses());

            // Run out of lives
            if (!pPlayer->alive()) {
                break;
            }

            // Completed the word
            if (pGuess->completedWord()) {
                break;
            }
        }

        printIt(pGuess->wrongGuesses());

/*
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
*/

      if (pWords->checkLetter("A")) { std::cout << "A exists" << std::endl; }
      if (pWords->checkLetter("Z")) {
          std::cout << "Z exists" << std::endl;
      } else {
          std::cout << "Z doesn't exist" << std::endl;
      }

      //pDead->loopDead();

      std::cout << std::endl << NordicOS::getBuildNumber() << std::endl;

        // Show Player Name
        //printIt(pPlayer->getName());

        // Get Word
        //printIt(sWord.cWord);

        // Letters
        //printIt(sWord.iLetters);

      return EXIT_SUCCESS;
  }
};

int main() {
    return NordicArts::Main();
}
