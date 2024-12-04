/*
1313. Decompress Run-Length Encoded List

Submitted: October 17, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.95 MB (beats 20.09%)
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        res.reserve(nums.size() / 2);
        for (int i = 0; i < nums.size(); i += 2) {
            for (int j = 0; j < nums.at(i); ++j) {
                res.push_back(nums.at(i + 1));
            }
        }
        return res;
    }
};
