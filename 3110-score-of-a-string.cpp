/*
3110. Score of a String

Submitted: October 8, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.30 MB (beats 98.82%   )
*/

class Solution {
public:
    int scoreOfString(string s) {
        char len = s.length();
        short result = 0;
        for (char i = 0; i < len - 1; ++i) {
            result += abs(s[i] - s[i + 1]);
        }
        return result;
    }
};
