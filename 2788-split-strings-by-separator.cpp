/*
2788. Split Strings by Separator

Submitted: October 25, 2024

Runtime: 3 ms (beats 93.17%)
Memory: 43.74 MB (beats 66.12%)
*/

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        string i;
        for (string word : words) {
            i.clear();
            for (auto it = word.begin(); it != word.end(); ++it) {
                if (*it == separator) {
                    if (!i.empty()) res.push_back(i);
                    i.clear();
                    continue;
                }
                i.push_back(*it);
            }
            if (!i.empty()) res.push_back(i);
        }
        return res;
    }
};
