/*
2825. Make String a Subsequence Using Cyclic Increments

LeetCode Daily Question for December 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 14.74 MB (beats 98.74%)
*/

class Solution {
public:
    bool canMakeSubsequence(const string& str1, const string& str2) {
        if (str2.size() > str1.size()) return false;
        auto i = str1.cbegin(), j = str2.cbegin();
        const auto end1 = str1.cend(), end2 = str2.cend();
        while (i != end1 && j != end2) {
            if (*i == *j) {
                ++j;
            } else if ((*i == 'z' ? 'a' : *i + 1) == *j) {
                ++j;
            }
            ++i;
        }
        return j == end2;
    }
};
