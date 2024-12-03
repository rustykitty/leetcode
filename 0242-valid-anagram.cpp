/*
242. Valid Anagram

First submitted: October 10, 2024
This solution: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.10 MB (beats 17.76%)
*/

/*
Approach:
We count the number of times each character appears in the two strings. If they
are equal, they must be anagrams.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, unsigned short> s_count;
        unordered_map<char, unsigned short> t_count;
        for (const char& i : s) {
            s_count[i]++;
        }
        for (const char& i : t) {
            t_count[i]++;
        }
        return s_count == t_count;
    }
};
