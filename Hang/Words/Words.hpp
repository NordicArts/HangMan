#ifndef Words_H
#define Words_H

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

        WordStruct(int letters, int level, std::string word) : iLetters(letters), iLevel(level), cWord(word) { }
        WordStruct() {}
    };

    class Words {

    private:
        std::vector<WordStruct> m_vWords;

        WordStruct m_sPickedWord;

    protected:
    public:

    private:
        void ParseFile();
        std::vector<WordStruct> GetLevelWords(int iLevel) const;
    protected:
    public:
        Words();
        ~Words();

        std::vector<int> GetLevels();
        std::vector<int> GetCorrectLetters(std::string cLetter);

        int GetMaxLevel();

        bool CheckLetter(std::string cLetter);

        WordStruct GetWord(int iLevel);
        std::string GetPickedWord() const;
    };
}


#endif
