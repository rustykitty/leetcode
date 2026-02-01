/*
9. Palindrome Number

Submitted: October 21, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.51 MB (beats 68.71%)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        // reverse digits
        unsigned int y = 0;
        int x2 = x; 
        while (x2 != 0) {
            y *= 10;
            y += x2 % 10;
            x2 /= 10;
        }
        return x == y;
    }
};