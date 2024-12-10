/*
118. Pascal's Triangle

Submitted: December 10, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.82 MB (beats 7.86%)
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for (int i = 1; i < numRows; ++i) {
            vector<int> t;
            t.push_back(1);
            vector<int>& prev = res.back();
            for (int j = 0, n = prev.size(); j < n - 1; ++j) {
                t.push_back(prev[j] + prev[j + 1]);
            }
            t.push_back(1);
            res.push_back(t);
        }
        return res;
    }
};