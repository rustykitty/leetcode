/*
1281. Subtract the Product and Sum of Digits of an integer

Submitted: October 23, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.55 MB (beats 13.43%)
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int digitProduct = 1;
        int p = n;
        while (p != 0) {
            digitProduct *= p % 10;
            p /= 10;
        }
        int digitSum = 0;
        int s = n;
        while (s != 0) {
            digitSum += s % 10;
            s /= 10;
        }
        cout << digitProduct << " " << digitSum;
        return digitProduct - digitSum;
    }
};
