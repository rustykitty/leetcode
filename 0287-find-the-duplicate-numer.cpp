/*
287. Find the Duplicate Number

Submitted: January 5, 2024

Runtime: 63 ms (beats 20.20%)
Memory: 87.86 MB (beats 15.89%)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for (const int n : nums) {
            map[n]++;
            if (map[n] == 2) return n;
        }
        return 0;
    }
};