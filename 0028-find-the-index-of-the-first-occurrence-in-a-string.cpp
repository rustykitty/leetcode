/*
28. Find the Index of the First Occurrence in a String

Submitted: November 1, 2024

Runtime: 2 ms (beats 12.98%)
Memory 8.12 MB (beats 32.48%)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle) return 0;
        if (needle.size() > haystack.size()) return -1;
        for (short i = 0; i < haystack.size() - (needle.size() - 1); ++i) {
            if (haystack.substr(i, needle.size()) == needle) return i;
        }
        return -1;
    }
};
