#include <Guesses/Guesses.hpp>
#include <NordicOS/String/String.hpp>

namespace NordicArts {
    Guesses::Guesses(Words *pWords) : m_pWords(pWords), m_iWrongGuesses(0) {
    }

    Guesses::~Guesses() {
        m_pWords = nullptr;
    }

    bool Guesses::doGuess(std::string cLetter) {
        cLetter                 = NordicOS::toUpper(cLetter);
        bool bAlreadyDone       = false;
        bool bReturn            = false;

        // check if letter is already guessed
        for (auto letter : m_vLettersGuessed) {
            if (cLetter == letter) {
                bAlreadyDone = true;
            }
        }

        // its not in list, do rest of process
        if (!bAlreadyDone) {
            m_vLettersGuessed.insert(m_vLettersGuessed.begin(), cLetter);
    
            bReturn = m_pWords->checkLetter(cLetter);
            if (bReturn) {
                m_vCorrectLetters.insert(m_vCorrectLetters.begin(), cLetter);
            } else {
                m_vWrongLetters.insert(m_vWrongLetters.begin(), cLetter);
                m_iWrongGuesses++;
            }
        } else {
            return true;
        }

        return bReturn;
    }

    int Guesses::wrongGuesses() const {
        return m_iWrongGuesses;
    }

    bool Guesses::completedWord() const {
        bool bCompleted = false;

        if (m_vCorrectLetters.size() == m_pWords->wordLength()) {
            bCompleted = true;
        }

        return bCompleted;
    }

    void Guesses::displayLetters() const {
        // Display Wrong Letters
        std::cout << "Wrong Letters: " << std::endl;
        for (auto letter : m_vWrongLetters) {
            std::cout << " " << letter << ", ";
        }
        std::cout << std::endl;
    }

    void Guesses::displayGuessWordSpaces() const {
        std::string cLetter;
        bool        bFound;
        WordStruct  sWord = m_pWords->getWord();

        for (int i = 0; i < sWord.iLetters; i++) {
            bFound = false;
            for (auto correctLetter : m_vCorrectLetters) {
                if (correctLetter == sWord.vLetters[i]) {
                    cLetter = correctLetter;
                    bFound = true;
                }
            }
            if (bFound) {
                std::cout << " " << sWord.vLetters[i];
            } else {
                std::cout << " _";
            }
        }
        std::cout << std::endl;
    }
};
