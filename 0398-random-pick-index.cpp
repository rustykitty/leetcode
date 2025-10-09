/*
398. Random Pick Index

Submitted: May 21, 2025

Runtime: 41 ms (beats 73.23%)
Memory: 68.46 MB (beats 24.26%)
*/

class Solution {
private:
    unordered_map<int, vector<size_t>> indices;
public:
    Solution(const vector<int>& nums) {
        for (size_t i = 0; i < nums.size(); ++i) {
            indices[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        return indices[target][rand() % indices[target].size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */