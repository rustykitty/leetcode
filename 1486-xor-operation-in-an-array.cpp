/*
1486. XOR Operation in an Array

Submitted: October 28, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.31 MB (beats 84.96%)
*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int res = start;
        for (int i = 1; i < n; ++i) {
            res ^= (start + i + i);
        }
        return res;
    }
};
