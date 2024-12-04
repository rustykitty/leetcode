/*
344. Reverse String

Submitted: December 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 27.38 MB (beats 18.77%)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, n = s.size(); i < n / 2; ++i) {
            char temp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = temp;
        }
    }
};
