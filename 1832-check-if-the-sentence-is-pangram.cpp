/*
1832. Check if the Sentence is Pangram

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.96 MB (beats 62.91%)
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool has_appeared[26] = { false };
        for (const char& c : sentence) {
            if (!has_appeared[c - 'a']) has_appeared[c - 'a'] = true;
        }
        bool *end = has_appeared + 26;
        for (bool *start = has_appeared; start != end; ++start) {
            if (!*start) return false;
        }
        return true;
    }
};
