/*
2109. Adding Spaces to a String

Leetcode Daily Question for December 3, 2024

Runtime: 17 ms (beats 73.49%)
Memory: 82.34 MB (beats 88.45%)
*/

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        res.reserve(s.size() + spaces.size());
        auto spi = spaces.begin();
        int i = 0;
        for (; i < s.size() && spi != spaces.end(); ++i) {
            if (i == *spi) {
                res.push_back(' ');
                spi++;
            }
            res.push_back(s[i]);
        }
        res.append(s.begin() + i, s.end());
        return res;
    }
};
