/*
2535. Difference Between Element Sum and Digit Sum of an Array

Submitted: October 21, 2024
Runtime: 0 ms (beats 100.00%)
Memory: 18.29 MB (beats 96.90%)
*/

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        // Element sum
        int elementSum = 0;
        for (const int& i : nums) {
            elementSum += i;
        }
        int digitSum = 0;
        // Digit sum (bit more complicated)
        for (int i : nums) {
            short dig = 0;
            while (i != 0) {
                dig += i % 10;
                i /= 10;
            }
            digitSum += dig;
        }
        return abs(elementSum - digitSum);
    }
};
