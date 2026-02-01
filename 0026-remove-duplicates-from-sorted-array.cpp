/*
26. Remove Duplicates from Sorted Array
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i = 0;
        while (i < nums.size()) {
            nums[k] = nums[i];
            while (i < nums.size() && nums[i] == nums[k]) ++i;
            k += 1;
        }
        return k; // And finally, return k
    }
};