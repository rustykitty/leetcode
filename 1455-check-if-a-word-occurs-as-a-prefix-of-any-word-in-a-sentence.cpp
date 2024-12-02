/*
1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

Leetcode Daily Question for December 2, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.36 MB (beats 6.42%)
*/

class Solution {
public:
    int isPrefixOfWord(string& sentence, const string& searchWord) {
        vector<string> words;
        // split string
        size_t pos(0);
        size_t sws = searchWord.size(); // Search Word Size
        words.push_back(sentence.substr(0, sentence.find(' '))); // first split
        while ((pos = sentence.find(' ', pos)) != string::npos) { // other splits
            // pos + 1 since sentence[pos] == ' '
            words.push_back(sentence.substr(pos + 1, pos + sws + 1)); 
            pos++;
        }
        for (unsigned char i = 0, n = words.size(); i < n; ++i) {
            const string& word = words[i];
            // strncmp / string.compare returns 0 if strings are equal
            if (word.compare(0, sws, searchWord) == 0) return i + 1;
        }
        return -1;
    }
};
