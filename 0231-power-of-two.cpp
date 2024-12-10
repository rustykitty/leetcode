/*
231. Power of Two

Solved: December 9, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.84 MB (beats 10.33%)
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return !(n & (n - 1));
    }
};