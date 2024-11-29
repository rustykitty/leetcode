"""
150. Evalute Reverse Polish Notation

Submitted: November 27, 2024

Runtime: 2 ms (beats 72.29%)
Memory: 19.11 MB (beats 6.55%)
"""

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token == '+':
                x = stack.pop()
                y = stack.pop()
                stack.append(x + y)
            elif token == "-": 
                y = stack.pop()
                x = stack.pop()
                stack.append(x - y)
            elif token == "*": 
                x = stack.pop()
                y = stack.pop()
                stack.append(x * y)
            elif token == "/": 
                y = stack.pop()
                x = stack.pop()
                stack.append(int(x / y))
            else:
                stack.append(int(token))
        return stack[-1]