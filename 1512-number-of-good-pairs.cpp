/*
1512. Number of Good Pairs

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.88 MB (beats 92.44%)
*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    res++;
                }
            }
        }
        return res;
    }
};