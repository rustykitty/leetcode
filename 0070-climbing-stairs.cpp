/*
70. Climbing Stairs

Submitted: January 9th, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 7.97 MB (beats 43.48%)
*/

class Solution {
public:
    int cache[45] = { 0 };
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (cache[n - 1] != 0) return cache[n - 1];
        int res = climbStairs(n - 2) + climbStairs(n - 1);
        if (cache[n - 1] == 0) cache[n - 1] = res;
        return res;
    }
};