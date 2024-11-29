/*
2194. Cells in a Range on an Excel Sheet

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.59 MB (beats 52.25%)
*/

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> cells;
        int startColumn = s[0] - 'A',
            startRow = s[1] - '0', 
            endColumn = s[3] - 'A' + 1, 
            endRow = s[4] - '0' + 1;
        for (int i = startColumn; i != endColumn; ++i) {
            for (int j = startRow; j != endRow; ++j) {
                string cell;
                cell.push_back(i + 65);
                cell.push_back(j + 48);
                cells.push_back(cell);
            }
        }
        return cells;
    }
};