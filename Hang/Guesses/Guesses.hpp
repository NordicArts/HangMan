#ifndef NordicArts_HangMan_Guesses_H
#define NordicArts_HangMan_Guesses_H

#include <Words/Words.hpp>
#include <vector>

namespace NordicArts {
    class Guesses {
    // Variables
    public:
        

    protected:
    private:
        std::vector<std::string> m_vLettersGuessed;
        std::vector<std::string> m_vCorrectLetters;

        WordStruct m_sWord;
        
        Words      *m_pWords;

    // Methods
    public:
        Guesses(WordStruct sWord);
        ~Guesses();

        bool doGuess(std::string cLetter);

    protected:
    private:

    };
};

#endif
