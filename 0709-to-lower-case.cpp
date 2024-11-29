/*
709. To Lower Case

Submitted: November 22, 2024

Runtime: 0 ms (100.00%)
Memory: 7.62 MB (beats 61.62%)
*/

class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if ('A' <= c && c <= 'Z') c = c + 32;
        }
        return s;
    }
};