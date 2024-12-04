/*
476. Number Compliment
1009. Compliment of Base 10 Integer (duplicate problem)

Submitted: November 15, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.40 MB (beats 94.01)
*/

class Solution {
public:
    int findComplement(int n) {
        int d = n;
        if (n == 0) return 1;
        int digits = 0;
        while (n != 0) {
            n >>= 1;      // number of 1 bits in digits is the
            digits <<= 1; // total number of digits in n without leading zeroes
            digits++;
        }
        return d ^ digits; // 1 ^ 1 = 0, 0 ^ 1 = 1
    }
};
