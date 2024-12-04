/*
2520. Count the Digits that Divide a Number

Submitted: October 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.41 MB (beats 37.17%)
*/

class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int res = 0;
        while (n != 0) {
            res += (num%(n%10) == 0);
            n /= 10;
        }
        return res;
    }
};
