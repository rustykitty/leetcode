/*
9. Palindrome Number

Submitted: October 30, 2024

Runtime: 4 ms (beats 35.53%)
Memory: 8.51 MB (beats 39.93%)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        // Reverse digits
        long y = 0;
        int x2 = x; 
        while (x2 != 0) {
            y *= 10;
            y += x2 % 10;
            x2 /= 10;
        }
        // should equal if they are palindrome
        return x == y;
    }
};
