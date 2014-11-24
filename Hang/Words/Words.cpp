#include "Words.hpp"

namespace NordicArts {
    Words::Words() {
        m_sPickedWord = WordStruct();

        ParseFile();
    }

    Words::~Words() {
    }

    int Words::getMaxLevel() {
        int i=1;
        for(auto it: m_vWords){
            if(it.iLevel > i){
                i = it.iLevel;
                continue;
            }
        }
        return i;
    }


    std::vector<WordStruct> Words::getLevelWords(int iLevel) const {
        std::vector<WordStruct> vLevelWords;
        for(auto it: m_vWords){
            if(it.iLevel == iLevel) {
                vLevelWords.insert(vLevelWords.begin(), it);
            }
        }

        return vLevelWords;

    }

    std::vector<int> Words::getLevels(){
        std::vector<int> vLevels;
        bool bLevelExists;

        for(auto it: m_vWords){
            bLevelExists = false;

            for(auto it2: vLevels){
                if(it.iLevel == it2){
                    bLevelExists = true;

                    break;
                }
            }

            if (!bLevelExists) {
                vLevels.insert(vLevels.begin(), it.iLevel);
            }
        }

        sort(vLevels.begin(),vLevels.end());

        return vLevels;
    }

    bool Words::checkLetter(std::string cLetter) {
        std::string cWord = m_sPickedWord.cWord;

        bool bReturn = false;

        for (int i = 0; i < cWord.length(); i++) {
            const char cChar = toupper(cWord.at(i));

            if (cChar == *cLetter.c_str()) {
                bReturn = true;
            }
        }

        return bReturn;
    }

    std::vector<int> Words::getCorrectLetters(std::string cLetter) {
        std::vector<int> vLetters;

        std::string cWord = m_sPickedWord.cWord;

        for (int i = 0; i < cWord.length(); i++) {
            const char cChar = toupper(cWord.at(i));

            if (cChar == *cLetter.c_str()) {
                vLetters.insert(vLetters.begin(), i);
            }
        }

        return vLetters;
    }

    WordStruct Words::getWord(int iLevel) {
        std::string cReturn;

        std::vector<WordStruct> vLevelWords;

        vLevelWords = getLevelWords(iLevel);

        int iRand;
        NordicOS::Time oTime;
        NordicOS::Time *pTime = &oTime;
        srand(pTime->getNanoSeconds());
        iRand = (rand() % vLevelWords.size());

        m_sPickedWord = vLevelWords.at(iRand);

        return m_sPickedWord;
    }

    std::string Words::getPickedWord() const {
        return m_sPickedWord.cWord;
    }

    void Words::parseFile() {
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
