/*
191. Number of 1 Bits

Submitted: January 25, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.26 MB (beats 47.54%)
*/

class Solution {
public:
    inline int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};
