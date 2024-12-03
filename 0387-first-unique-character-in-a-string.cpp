/*
387. Firrst Unique Character in a String

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 12.95 MB (beats 94.71%)
*/

class Solution {
public:
    int firstUniqChar(string s) {
        int occurrences[26] = { 0 }; // using an array as a map w/ fixed values
        for (const char& c : s) {
            occurrences[c - 'a']++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (occurrences[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};
