/*
1910. Remove All Occurrences of a Substring

LeetCode Daily Question for February 10, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.22 MB (beats 90.62%)
*/

class Solution {
public:
    string& removeOccurrences(string& s, const string& part) {
        size_t pos;
        while ((pos = s.find(part)) != string::npos) s.erase(pos, part.size());
        return s;
    }
};
