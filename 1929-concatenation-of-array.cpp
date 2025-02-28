/*
1929. Concatenation of Array

Submitted: February 25, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.18 MB (beats 17.74%)
*/

class Solution {
public:
    vector<int>& getConcatenation(vector<int>& nums) {
        size_t n = nums.size();
        nums.reserve(n * 2);
        for (int i = 0; i < n; ++i) nums.push_back(nums[i]);
        return nums;
    }
};
