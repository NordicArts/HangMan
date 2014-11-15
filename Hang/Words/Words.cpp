#include "Words.hpp"

namespace NordicArts {


    Words::Words() {
        ParseFile();
    }

    int Words::GetLevels() {

    }

    bool Words::CheckLetter() {

    }

    std::string Words::GetWord() {

    }

    void Words::ParseFile() {
        std::string cFileName = "./GameFiles/words.json";

        NordicOS::TextFileReader pFile(cFileName, true);
        std::string cFilePath = pFile.getFilePath();
        if (NordicOS::fileExists(cFilePath)) {
            boost::property_tree::ptree pTree;
            boost::property_tree::read_json(cFilePath, pTree);
            BOOST_FOREACH(boost::property_tree::ptree::value_type &words, pTree.get_child("words")) {
                            std::string cWord = words.second.get<std::string>("word");
                            int iLevel = words.second.get<int>("level");
                            int iLetters = words.second.get<int>("letters");
                            WordStruct sWords = WordStruct(iLetters, iLevel, cWord);
                            m_vWords.insert(m_vWords.begin(), sWords);
                        }
        }
    }
}
}