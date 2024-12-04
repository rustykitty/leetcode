/*
2974. Minimum Number Game

Submitted: October 25, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 27.48 MB (beats 76.72%)
*/

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        arr.reserve(nums.size());
        sort(nums.begin(), nums.end());
        auto it = nums.begin();
        while (it != nums.end()) {
            int alice = *it;
            int bob = *++it;
            arr.push_back(bob);
            arr.push_back(alice);
            ++it;
        }
        return arr;
    }
};
