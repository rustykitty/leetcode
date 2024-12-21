/*
75. Sort Colors

Submitted: December 20, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.46 MB (beats 35.93%)
*/

class Solution {
public:
    // counting sort
    void sortColors(vector<int>& nums) {
        int count[3] = { 0, 0, 0 };
        for (const int i : nums) {
            count[i]++;
        }
        auto it = nums.begin();
        for (int i = 0; i < count[0]; ++i) {
            *it++ = 0;
        }
        for (int i = 0; i < count[1]; ++i) {
            *it++ = 1;
        }
        for (int i = 0; i < count[2]; ++i) {
            *it++ = 2;
        }
    }
};