/*
169. Majority Element

Submitted: December 5, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 28.15 MB (beats 20.01%)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        for ( const int num : nums ) {
            map[num]++;
        }
        for ( auto& kv : map ) {
            // problem statement says that floor(n / 2) is majority
            if (kv.second > (nums.size() / 2)) return kv.first;
        }
        return -1;
    }
};
