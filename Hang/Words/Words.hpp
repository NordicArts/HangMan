#ifndef Words_H
#define Words_H

#include <Includes.hpp>
#include <NordicOS/FileHandler/TextFileReader/TextFileReader.hpp>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>


namespace NordicArts {

    struct WordStruct {
        int iLevel;
        int iLetters;
        std::string cWord;
        WordStruct(int letters, int level, std::string word) : iLetters(letters), iLevel(level), cWord(word){}
    };

    class Words {

    private:
         std::vector<WordStruct> m_vWords;
    protected:
    public:

    private:
        void ParseFile();
    protected:
    public:
        Words();
        int GetLevels();
        bool CheckLetter();
        std::string GetWord();
    };
}


#endif
