/*
2315. Count Asterisks

Submitted: January 17, 2025

RUntime: 0 ms (Beats 100.00%)
Memory: 8.36 MB (beats 68.54%)
*/

class Solution {
public:
    int countAsterisks(string s) {
        bool count = true;
        int res = 0;
        for (const char c : s) {
            if (c == '|') count = !count;
            if (count && c == '*') ++res;
        }
        return res;
    }
};