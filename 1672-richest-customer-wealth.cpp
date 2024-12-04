/*
1672. Richest Customer Wealth

Submitted: October 23, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.26 MB (beats 98.97%)
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxCount = 0;
        for (const vector<int>& account : accounts) {
            int sum = 0;
            for (const int& j : account) {
                sum += j;
            }
            if (sum > maxCount) {
                maxCount = sum;
            }
        }
        return maxCount;
    }
};
