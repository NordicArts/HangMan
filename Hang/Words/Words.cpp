#include <Words/Words.hpp>
#include <NordicOS/String/String.hpp>

namespace NordicArts {
    Words::Words() {
        m_sPickedWord = WordStruct();

        parseFile();
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

    int Words::wordLength() const {
        return m_sPickedWord.iLetters;
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

    void Words::setWord(WordStruct sWord) {
        m_sPickedWord = sWord;
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
        std::string cWord = NordicOS::toUpper(m_sPickedWord.cWord);
        cLetter           = NordicOS::toUpper(cLetter);

        bool bReturn = false;

        for(std::string::size_type i = 0; i < cWord.size(); ++i) {
            const char cWordLetter = cWord[i];
            if (cWordLetter == *cLetter.c_str()) {
                bReturn = true;
            }
        }

        return bReturn;
    }

    std::vector<int> Words::getCorrectLetters(std::string cLetter) {
        std::vector<int> vLetters;

        std::string cWord       = NordicOS::toUpper(m_sPickedWord.cWord);
        cLetter                 = NordicOS::toUpper(cLetter);
        std::string cGetLetter;

        for (int i = 0; i < cWord.length(); i++) {
            cGetLetter = cWord.at(i);

            if (cGetLetter == cLetter) {
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

    WordStruct Words::getWord() {
        return m_sPickedWord;
    }

    std::string Words::getPickedWord() const {
        return m_sPickedWord.cWord;
    }

    std::vector<std::string> Words::splitWord(std::string cWord) {
        std::vector<std::string> vReturn;
        std::string cLetter;

        for (auto letter : cWord) {
            cLetter = NordicOS::getString(letter);

            vReturn.insert(vReturn.end(), cLetter);
        }

        return vReturn;
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

                WordStruct sWord    = WordStruct(iLetters, iLevel, NordicOS::toUpper(cWord));
                sWord.vLetters      = splitWord(cWord);

                m_vWords.insert(m_vWords.begin(), sWord);
            }
        }
    }
};
