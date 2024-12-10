/*
119. Pascal's Triangle II

Submitted: December 10, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.63 MB (beats 7.45%)
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) return {1};
        vector<int> prev = getRow(rowIndex - 1);
        vector<int> res;
        res.push_back(1);
        for (int i = 0; i < prev.size() - 1; ++i) {
            res.push_back(prev[i] + prev[i + 1]);
        }
        res.push_back(1);
        return res;
    }
};