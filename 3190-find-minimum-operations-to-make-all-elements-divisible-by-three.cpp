/*
3190. Find Minimum Operations to Make All Elements Divisible by Three

Submitted: October 7, 2024

Runtime: 8 ms (beats 6.44%)
Memory: 22.80 MB (beats 5.08%)
*/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int result = 0;
        for ( int i : nums ) {
            if (i%3 != 0) result += 1;
        }
        return result;
    }
};
