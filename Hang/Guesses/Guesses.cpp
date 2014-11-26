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

        m_vLettersGuessed.insert(m_vLettersGuessed.begin(), cLetter);

        bool bReturn = m_pWords->checkLetter(cLetter);
        if (bReturn) {
            m_vCorrectLetters.insert(m_vCorrectLetters.begin(), cLetter);
        } else {
            m_iWrongGuesses++;
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
};
