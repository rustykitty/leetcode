/*
8. String to Integer (atoi)

Submitted: February 10, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.09 MB (beats 82.35%)
*/

class Solution {
public:
    int myAtoi(string s) {
        if (s.size() == 0) return 0;
        long long res = 0;
        auto it = s.cbegin();
        while (*it == ' ') ++it;
        bool negative = false;
        if (*it == '-') {
            negative = true;
            ++it;
        } else if (*it == '+') {
            ++it;
        }
        while (it != s.cend() && 48 <= (int) *it && (int) *it <= 57) {
            res *= 10;
            if (res > 2147483648 && negative) return -2147483648;
            if (res > 2147483647 && !negative) return 2147483647;
            res += ((int) *it) - 48;
            ++it;
        }
        if (res > 2147483647) return negative ? -2147483648 : 2147483647;
        if (negative) return -res;
        return res;
    }
};
