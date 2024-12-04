/*
367. Valid Perfect Square

Runtime: 0 ms (beats 100.00%)
Memory: 7.40 MB (beats 51.41%)
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        int max = num < 46341 ? num : 46341; // 46341^2 > 2^31-1 (INT_MAX)
        for (int i = 0; i < max; ++i) {
            if (i * i == num) return true;
        }
        return false;
    }
};
