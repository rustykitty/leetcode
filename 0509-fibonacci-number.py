"""
509. Fibonacci Number

Submitted: October 24, 2024

Runtime: 977 ms (beats 5.12%)
Memory: 13.87 MB (beats 100.00%)
"""

class Solution:
    def fib(self, n: int) -> int:
        if n == 0 or n == 1:
            return n
        return self.fib(n - 1) + self.fib(n - 2)
