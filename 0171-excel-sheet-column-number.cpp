/*
171. Excel Sheet Column Number

Submitted: September 24, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.74 MB (beats 47.20%)
*/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for ( const char c : columnTitle ) {
            res *= 26;
            res += (int) c - 64;
        }
        return res;
    }
};
