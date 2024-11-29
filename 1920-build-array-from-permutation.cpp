/*
1920. Build Array from Permutation

Submitted: October 16, 2024

Runtime: 8 ms (beats 10.42%)
Memory: 19.02 MB (beats 52.24%)
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> permutated;
        permutated.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            permutated.push_back(nums.at(nums.at(i)));
        }
        return permutated;
    }
};