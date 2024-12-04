/*
202. Happy Number

Submitted: October 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.44 MB (beats 74.60%)
*/

class Solution {
public:
    bool isHappy(int n) {
        int fast = sumDigits(sumDigits(n));
        int slow = sumDigits(n);
        while (fast != slow) { // cycle detection algorithim
            fast = sumDigits(sumDigits(fast));
            slow = sumDigits(slow);
        }
        if (fast == 1) return true;
        return false;
    }
    int sumDigits(int n) { // sum squares of digits
        if (n == 1) return n;
        int res = 0;
        while (n != 0) {
            res += ((n%10) * (n%10));
            n /= 10;
        }
        return res;
    }
};
