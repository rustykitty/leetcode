/*
2413. Smallest Even Multiple

Submitted: January 20, 2925

Runtime: 0 ms (beats 100.00%)
Memory: 7.91 MB (beats 25.99%)
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n & 1 ? n << 1 : n;
    }
};