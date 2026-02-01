/*
20. Valid Parentheses

Submitted: November 4, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.77 MB (beats 87.39%)
*/

class Solution {
public:
    bool isValid(const string& s) {
        vector<char> stack;
        for (const char& c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            } else if (stack.empty() || stack.back() != (c == ')' ? '(' : c == ']' ? '[' : c == '}' ? '{' : c)) {
                return false;
            } else {
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};