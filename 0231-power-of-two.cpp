/*
231. Power of Two

Submitted: January 17, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 7.83 MB (beats 49.22%)
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && !(n & (n - 1));
    }
};