/*
171. Excel Sheet Column Number

Submitted: November 27, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.77 MB (beats 31.86%)

See 0171-excel-sheet-column-number-alternative.cpp for an alternative solution.
*/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for ( const char& c : columnTitle ) {
            res *= 26;
            res += (int) c - 64;
        }
        return res;
    }
};