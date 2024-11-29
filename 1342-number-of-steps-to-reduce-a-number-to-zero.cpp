/*
1342. Number of Steps to Reduce a Number to Zero

Submitted: October 14, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.64 MB (beats 55.44%)
*/

class Solution {
public:
    int numberOfSteps(int num) {
        int res = 0;
        while (num != 0) {
            res++;
            if (num & 1) num--; // bitwise operations faster than arithmetic
            else num >>= 1;
        }
        return res;
    }
};