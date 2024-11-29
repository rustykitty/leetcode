/*
191. Number of 1 Bits

First submitted: October 13, 2024
This solution: October 14, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.90 MB (beats 76.22%)
*/

class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        while (n != 0) {
            res += n & 1;
            n >>= 1;
        }
        return res;
    }
};