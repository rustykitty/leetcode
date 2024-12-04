/*
2108. Find First Palindromic String in the Array

Submitted: October 28, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 23.63 MB (beats 82.86%)
*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            bool isPalindrome = true;
            string::const_iterator forward;
            string::const_reverse_iterator backward;
            for (forward = word.cbegin(), backward = word.crbegin(); forward != word.end(); ++forward, ++backward) {
                if (*forward != *backward) {
                    isPalindrome = false;
                    break;
                }
            }
            if (!isPalindrome) continue;
            return word;
        }
        return "";
    }
};
