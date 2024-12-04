/*
242. Valid Anagram

Submitted: Decemebr 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.44 MB (beats 47.03%)
*/

/*
Approach:
Count the number of times each character appears in the two strings. If they
are equal, they must be anagrams.
*/

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        uint16_t* s_count = (uint16_t*) calloc(26, sizeof(uint16_t));
        uint16_t* t_count = (uint16_t*) calloc(26, sizeof(uint16_t));
        for (const char& i : s) {
            s_count[i - 'a']++;
        }
        for (const char& i : t) {
            t_count[i - 'a']++;
        }
        for (uint8_t i = 0; i < 26; ++i) {
            if (s_count[i] != t_count[i]) return false;
        }
        return true;
    }
};
