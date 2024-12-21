/*
136. Single Number

Submitted: December 20, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 20.71 MB (beats 23.16%)
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for (const int i : nums) {
            n ^= i;
        }
        return n;
    }
};