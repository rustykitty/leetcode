"""
509. Fibonacci Number

Submitted: October 24, 2024

Runtime: 38 ms (beats 57.81%)
Memory: 17.66 MB (beats 24.28%)
"""

class Solution:
    @functools.cache
    def fib(self, n: int) -> int:
        if n == 0 or n == 1:
            return n
        return self.fib(n - 1) + self.fib(n - 2)
