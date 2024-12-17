/*
3264. Final Array State After K Multiplication Operations I

LeetCode Daily Question for December 15, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 27.17 MB (beats 46.57%)
*/

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; ++i) {
            auto pos = nums.begin();
            for (auto it = nums.begin() + 1; it != nums.end(); ++it) {
                if (*it < *pos) pos = it;
            }
            *pos = *pos * multiplier;
        }
        return nums;
    }
};