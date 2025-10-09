/*
168. Excel Sheet Column Title

Submitted: October 7, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.60 MB (beats 90.00%)
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string col = "";
        while (columnNumber > 0) {
            columnNumber -= 1;
            col.push_back((columnNumber % 26) + 65);
            columnNumber /= 26;
        }
        reverse(col.begin(), col.end());
        return col;
    }
};