/*
171. Excel Sheet Column Number

Submitted: October 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.76 MB (beats 31.86%)

*/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        while (columnTitle.length() > 0) {
            res *= 26;
            res += (int) columnTitle[0] - 64;
            columnTitle = columnTitle.substr(1); // slicing string: so "ABCD" becomes "BCD"
        }
        return res;
    }
};