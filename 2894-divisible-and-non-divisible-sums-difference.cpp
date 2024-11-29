/*
2894. Divisible and Non-divisible Sums Difference

Submitted: October 7, 2024

Runtme: 0 ms (beats 100.00%)
Memory: 8.14 MB (beats 55.55%)
*/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        int num2 = 0;
        for (int i = 1; i <= n; ++i) {
            if (i%m > 0) num1 += i;
            else num2 += i;
        }
        return num1 - num2;
    }
};