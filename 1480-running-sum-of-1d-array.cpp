/*
1480. Running Sum of 1d Array

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.67 MB (beats 95.29%)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums;
        sums.reserve(nums.size());
        int n = 0;
        for (int i : nums) {
            n += i;
            sums.push_back(n);
        }
        return sums;
    }
};