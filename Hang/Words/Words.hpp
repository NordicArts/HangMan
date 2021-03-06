#ifndef NordicArts_HangMan_Words_H
#define NordicArts_HangMan_Words_H

#include <Includes.hpp>
#include <NordicOS/FileHandler/TextFileReader/TextFileReader.hpp>
#include <NordicOS/Time/Time.hpp>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <algorithm>
#include <boost/locale.hpp>

namespace NordicArts {
    struct WordStruct {
        int iLevel;
        int iLetters;

        std::string cWord;
        
        std::vector<std::string> vLetters;

        WordStruct() {}
        WordStruct(int letters, int level, std::string word) : iLetters(letters), iLevel(level), cWord(word) {}
    };

    class Words {

    // Variables
    public:
    protected:
    private:
        std::vector<WordStruct> m_vWords;

        WordStruct m_sPickedWord;

    // Methods
    public:
        Words();
        ~Words();

        std::vector<int> getLevels();
        std::vector<int> getCorrectLetters(std::string cLetter);

        int getMaxLevel();
        int wordLength() const;

        bool checkLetter(std::string cLetter);

        WordStruct getWord(int iLevel);
        WordStruct getWord();
    
        std::string getPickedWord() const;

        void setWord(WordStruct sWord);

    protected:
    private:
        void parseFile();

        std::vector<WordStruct> getLevelWords(int iLevel) const;
    
        std::vector<std::string> splitWord(std::string cWord);
    };
}


#endif
