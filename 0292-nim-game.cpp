/*
292. Nim Game

Submitted: May 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 7.80 MB (beats 53.38%)
*/

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};
