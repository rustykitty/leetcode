/*
2942. Find Words Containing Character

Submitted: October 31, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 33.37 MB (beats 62.85%)
*/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i = 0; i < words.size(); ++i) {
            if (words.at(i).find_first_of(x) != string::npos) {
                res.push_back(i);
            }
        }
        return res;
    }
};