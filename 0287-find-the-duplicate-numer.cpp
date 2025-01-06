/*
287. Find the Duplicate Number

Submitted: January 5, 2024

Runtime: 71 ms (beats 15.48%)
Memory: 87.77 MB (beats 18.81%)
*/

class Solution {
public:
    int findDuplicate(const vector<int>& nums) const noexcept {
        unordered_set<int> set;
        for (const int n : nums) {
            if (set.find(n) == set.end()) {
                set.emplace(n);
            } else {
                return n;
            }
        }
        return 0;
    }
};