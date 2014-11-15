
#include "Words.hpp"

namespace NordicArts {
    Words::Words() {
        ParseFile();
    }

    int Words::GetLevels() {
        return 0;
    }

    bool Words::CheckLetter() {
        return false;
    }

    std::string Words::GetWord() {
        std::string cReturn;

        for (std::vector<WordStruct>::iterator it = m_vWords.begin(); it != m_vWords.end(); it++) {
            cReturn = it->cWord;
        }

        return cReturn;
    }

    void Words::ParseFile() {
        std::string cFileName = "./GameFiles/words.json";

        NordicOS::TextFileReader pFile(cFileName, true);
        std::string cFilePath  = pFile.getFilePath();
        if (NordicOS::fileExists(cFilePath)) {
            boost::property_tree::ptree pTree;
            boost::property_tree::read_json(cFilePath, pTree);
            BOOST_FOREACH(boost::property_tree::ptree::value_type &wordObj, pTree.get_child("words")) {
                std::string cWord   = wordObj.second.get<std::string>("word");
                int iLevel          = wordObj.second.get<int>("level");
                int iLetters        = wordObj.second.get<int>("letters");

                WordStruct sWords   = WordStruct(iLetters, iLevel, cWord);
                m_vWords.insert(m_vWords.begin(), sWords);
            }
        }
    }
};