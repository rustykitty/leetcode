/*
461. Hamming Distance

Submitted; January 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.00 MB (beats 5.85%)
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        while (x != 0 && y != 0) {
            if ((x & 1) != (y & 1)) ++result;
            x >>= 1;
            y >>= 1;
        }
        if (y != 0) swap(x, y);
        while (x != 0) {
            result += (x & 1);
            x >>= 1;
        }
        return result;
    }
};
