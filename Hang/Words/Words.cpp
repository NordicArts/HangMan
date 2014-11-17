#include "Words.hpp"

namespace NordicArts {
    Words::Words() {
        ParseFile();
    }

    int Words::GetMaxLevel() {
        int i=1;
        for(auto it: m_vWords){
            if(it.iLevel > i){
                i=it.iLevel;
                continue;
            }
        }
        return i;
    }


    std::vector<WordStruct> Words::GetLevelWords(int iLevel) const {
        std::vector<WordStruct> vLevelWords;
        for(auto it: m_vWords){
            if(it.iLevel == iLevel) {
                vLevelWords.insert(vLevelWords.begin(), it);
            }
        }

        return vLevelWords;

    }

    std::vector<int> Words::GetLevels(){
        std::vector<int> vLevels;
        bool LevelExists;

        for(auto it: m_vWords){
            LevelExists = false;
            for(auto it2: vLevels){
                if(it.iLevel == it2){
                    LevelExists = true;
                    break;
                }
            }
            if(!LevelExists) {
                vLevels.insert(vLevels.begin(), it.iLevel);
            }
        }

        sort(vLevels.begin(),vLevels.end());
        return vLevels;
    }

    bool Words::CheckLetter() {
        return false;
    }

    std::string Words::GetWord(int iLevel) {
        std::string cReturn;
        std::vector<WordStruct> vLevelWords;

        vLevelWords = GetLevelWords(iLevel);
        int iRand;
        NordicOS::Time oTime;
        NordicOS::Time *pTime = &oTime;
        srand(pTime->getNanoSeconds());
        iRand = (rand() % vLevelWords.size());
        int i = 0;

        return vLevelWords.at(i).cWord;
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