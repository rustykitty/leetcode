/*
383. Ransom Note

Submitted: September 24, 2025

Runtime: 3 ms (beats 59.84%)
Submitted: 11.34 MB (beats 99.55%)
*/

class Solution {
public:
    bool canConstruct(const string& ransomNote, const string& magazine) {
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        int r[26] = {};
        int m[26] = {};
        for (const char c : ransomNote) {
            r[c - 'a']++;
        }
        for (const char c : magazine) {
            m[c - 'a']++;
        }
        for (unsigned char i = 0; i < 26; ++i) {
            if (r[i] > m[i]) {
                return false;
            }
        }
        return true;
    }
};