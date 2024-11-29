/*
3024. Type of Triangle

Submitted: October 29, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 22.50 MB (beats 73.04%)
*/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return       nums[0] + nums[1] <= nums[2] ? "none" : 
         nums[0] == nums[1] && nums[1] == nums[2] ? "equilateral" : 
         nums[0] == nums[1] || nums[1] == nums[2] ? "isosceles" : 
                                                    "scalene";
    }
};