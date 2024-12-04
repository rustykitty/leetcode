/*
258. Add Digits

Submitted: October 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.38 MB (beats 65.89%)
*/

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int temp = num;
            num = 0;
            while (temp > 0) {
                num += temp%10;
                temp /= 10;
            }
        }
        return num;
    }
};
