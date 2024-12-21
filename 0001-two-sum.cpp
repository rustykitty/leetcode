/*
1. Two Sum

Submitted: December 20, 2024

Runtime: 3 ms (beats 77.60%)
Memory: 14.80MB (beats 24.95%)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (map.count(target - nums[i])) {
                return { i, map[target - nums[i]] };
            } else {
                map[nums[i]] = i;
            }
        }
        return {}; // this is only here so that compliation doesn't fail
    }
};