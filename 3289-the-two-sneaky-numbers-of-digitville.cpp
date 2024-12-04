/*
3289. The Two Sneaky Numbers of Digitville

Submitted: October 18, 2024

Runtime: 2 ms (beats 47.35%)
Memory: 26.86 MB (beats 43.94%)
*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> uniq;
        vector<int> sneakies;
        for (int i = 0; i < nums.size() && sneakies.size() < 2; ++i) {
            int j = nums.at(i);
            bool e = uniq.count(j);
            if (e) {
                sneakies.push_back(j);
            } else {
                uniq.insert(nums.at(i));
            }
        }
        return sneakies;
    }
};
