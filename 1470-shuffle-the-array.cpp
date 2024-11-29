/*
1470. Shuffle the Array

Submitted October 18, 2024

Runtime: 8 ms (beats 20.27%)
Memory: 12.44 MB (beats 30.98)
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        res.reserve(n);
        for (int i = 0; i < n; i++ ) {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};
