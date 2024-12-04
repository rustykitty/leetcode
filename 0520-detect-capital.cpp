/*
520. Detect Capital

Submitted: November 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.73 MB (beats 61.68%)
*/

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) return true; // A, a, Aa, AA, aa: all true
        auto it = word.cbegin();
        const bool first_case = 'Z' >= *it;
        if (first_case) { // first is uppercase
            const bool second_case = 'Z' >= *++it;
            cout << first_case << second_case;
            if (!first_case && second_case) return false;
            for (; it != word.cend(); ++it) {
                const char& c = *it;
                if ('Z' >= c != second_case) return false;
            }
        } else { // all lowercase
            for (; it != word.cend(); ++it) {
                const char& c = *it;
                if ('Z' >= c) return false;
            }
        }
        return true;
    }
};
