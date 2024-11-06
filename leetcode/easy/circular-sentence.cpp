class Solution {
public:
    std::vector<std::string> splitIntoWords(const std::string& str) {
        std::vector<std::string> words;
        std::istringstream stream(str);
        std::string word;

        while (stream >> word) {
            words.push_back(word);
        }

        return words;
    }

    bool isCircularSentence(const std::string& sentence) {
        std::vector<std::string> words = splitIntoWords(sentence);

        for (size_t i = 0; i < words.size(); ++i) {
            char lastChar = words[i].back();
            char nextFirstChar = words[(i + 1) % words.size()].front();

            if (lastChar != nextFirstChar) {
                return false;
            }
        }

        return true;
    }
};