/*
1876. Substrings of Size Three with Distinct Characters

Submitted: January 13, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.37 MB (beats 73.21%)
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0;
        // char arr[3];
        int res = 0;
        for (int i = 0, n = s.size() - 2; i < n; ++i) {
            res += (
                s[i] != s[i + 1] && s[i] != s[i + 2] &&
                s[i + 1] != s[i] && s[i + 1] != s[i + 2] &&
                s[i + 2] != s[i] && s[i + 2] != s[i + 1]
            );
        }
        return res;
    }
};