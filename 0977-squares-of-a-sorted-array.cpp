/*
977. Squares of a Sorted Array

Submitted: October 29, 2024

Runtime: 14 ms (beats 12.30%)
Memory: 29.83 MB (beats 21.26%)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int& n : nums) {
            n = n * n;
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};
