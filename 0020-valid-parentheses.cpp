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
            } else if (stack.empty() || // back() when deque is empty is UB
                       stack.back() != (c == ')' ? '(' : // matching closing
                                        c == ']' ? '[' : // parentheses with
                                        c == '}' ? '{' : // open parentheses
                                                   c)) {
                return false;
            } else { // valid pair
                stack.pop_back();
            }
        }
        return stack.empty(); 
    }
};
