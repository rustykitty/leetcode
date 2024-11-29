/*
168. Excel Sheet Column Title

Submitted: October 7, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.19 (beats 96.88%)
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string col = "";
        while (columnNumber > 0) {
            columnNumber -= 1;
            col.insert(0, 1, (columnNumber % 26) + 65);
            columnNumber /= 26;
        }
        return col;
    }
};