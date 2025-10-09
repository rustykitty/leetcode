/*
118. Pascal's Triangle

Submitted: June 18, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.80 MB (beats 31.17%)
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {vector<int>{1}};
        for (int i = 1; i < numRows; ++i) {
            vector<int> t = {1};
            for (int j = 0; j < res.back().size() - 1; ++j) {
                t.push_back(res.back()[j] + res.back()[j + 1]);
            }
            t.push_back(1);
            res.push_back(t);
        }
        return res;
    }
};