/*
504. Base 7

Submitted: October 6, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.49 MB (beats 86.63%)
*/

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        string res = "";
        bool negative = false;
        if (num < 0) {
            negative = true;
            num = -num;
        }
        while (num > 0) {
            res.insert(0, 1, num%7 + 48); // prepend
            num /= 7;
        }
        if (negative) res.insert(0, 1, '-');
        return res;
    }
};
