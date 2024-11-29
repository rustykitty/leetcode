/*
2798. Number of Employees Who Met the Target

Submitted: October 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 23.92 MB (beats 59.03%)
*/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int res = 0;
        for (const int& h : hours) {
            res += (h >= target);
        }
        return res;
    }
};