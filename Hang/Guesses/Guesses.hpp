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
        
        Words      *m_pWords = nullptr;

        int m_iWrongGuesses;

    // Methods
    public:
        Guesses(Words *pWord);
        ~Guesses();

        bool doGuess(std::string cLetter);
        bool completedWord() const;

        int wrongGuesses() const;

    protected:
    private:

    };
};

#endif
