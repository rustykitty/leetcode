/*
482. License Key Formatting

Submitted: November 4, 2024

Runtime: 2 ms (beats 61.43%)
Memory: 9.78 MB (beats 74.11%)
*/

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        unsigned short i = 0;
        string result;
        // we go through the string backwards so that the first group can
        // contain less than `k` digits. it's easier to make the last group
        // different than the first group different.
        for (auto it = s.crbegin(); it != s.crend(); ++it) {
            const char& c = *it;
            if (c == '-') { // ignore hyphens
                continue;
            } else if (i == k) { // after k non-hyphen characters, append a hyphen
                result.push_back('-');
                i = 0;
            }
            result.push_back(c >= 'a' ? c - 32 : c); // convert to uppercase
            ++i;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
