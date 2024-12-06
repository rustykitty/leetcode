/*
2554. Maximum Number of Integers to Choose From a Range I

Submitted: December 5, 2024

Runtime: 200 ms (beats 46.95%)
Memory: 177.84 MB (beats 60.98)
*/

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        // set for O(1) operations
        unordered_set<int> banned_set(banned.begin(), banned.end());
        int sum(0);
        int res(0);
        for (int i = 1; i != n + 1 && sum + i <= maxSum; ++i) {
            if (banned_set.count(i)) continue; // ignore banned numbers
            ++res;
            sum += (i);
        }
        return res;
    }
};
