/*
20. Valid Parentheses

First solved: October 29, 2024
This solution: November 25, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.90 MB (beats 74.91%)

*/

class Solution {
public:
    bool isValid(const string& s) {
        deque<char> stack;
        for (const char& c : s) {
            if (c == '(' || c == '[' || c == '{') { // opening parentheses
                stack.push_back(c);
            } else if (stack.empty() || 
                       stack.back() != (c == ')' ? '(' : // cursed mapping using
                                        c == ']' ? '[' : // ternary operators
                                        c == '}' ? '{' : // with fallback
                                                   c)) { // condition
                return false;
            } else {
                stack.pop_back();
            }
        }
        return stack.empty();
    }
};