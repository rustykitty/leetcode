/*
1929. Concatenation of Array

Submitted: October 7, 2024

Runtime: 8 ms (beats 8.35%)
Memory: 15.68 MB (beats 16.24%)
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            nums.push_back(nums.at(i));
        }
        return nums;
    }
};