/*
150. Evalute Reverse Polish Notation

Submitted: November 16, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 15.74 MB (beats 61.18%)
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (const string& token : tokens) {
            if (token == "+") {
                int x = stack.top();
                stack.pop();
                int y = stack.top();
                stack.pop();
                stack.push(x + y);
            } else if (token == "-") {
                int y = stack.top();
                stack.pop();
                int x = stack.top();
                stack.pop();
                stack.push(x - y);
            } else if (token == "*") {
                int x = stack.top();
                stack.pop();
                int y = stack.top();
                stack.pop();
                stack.push(x * y);
            } else if (token == "/") {
                int y = stack.top();
                stack.pop();
                int x = stack.top();
                stack.pop();
                stack.push(x / y);
            } else {
                stack.push(stoi(token));
            }
        }
        return stack.top();
    }
};
