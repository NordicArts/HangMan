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

        // Display letters in word
        pGuess->displayGuessWordSpaces();
        
        while (true) {
            // Do Guess
            std::cout << "Guess Letter:" << std::endl;
            getline(std::cin, cInput);
            if (!pGuess->doGuess(cInput)) {
                pPlayer->decrementLife();
            }

            // Get the Wrong Guesses
            pDead->doLife(pGuess->wrongGuesses());

            // Display the Letters guessed
            pGuess->displayLetters();

            // Display number of letters in word
            pGuess->displayGuessWordSpaces();

            // Run out of lives
            if (!pPlayer->alive()) {
                break;
            }

            // Completed the word
            if (pGuess->completedWord()) {
                break;
            }
        }
        
        return EXIT_SUCCESS;
    }
};

int main() {
    return NordicArts::Main();
}
