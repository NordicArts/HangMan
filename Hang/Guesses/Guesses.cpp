#include <Guesses/Guesses.hpp>
#include <NordicOS/String/String.hpp>

namespace NordicArts {
    Guesses::Guesses(WordStruct sWord) : m_sWord(sWord) {
        Words  oWords;
        m_pWords = &oWords;
        
        m_pWords->setWord(sWord);
    }

    Guesses::~Guesses() {
    }

    bool Guesses::doGuess(std::string cLetter) {
        cLetter                 = NordicOS::toUpper(cLetter);

        m_vLettersGuessed.insert(m_vLettersGuessed.begin(), cLetter);

        bool bReturn = m_pWords->checkLetter(cLetter);
        if (bReturn) {
            m_vCorrectLetters.insert(m_vCorrectLetters.begin(), cLetter);
        }

        //printIt(m_sWord.cWord);
        //printIt(bReturn);
        //printIt(cLetter);

        return bReturn;
    }
};
