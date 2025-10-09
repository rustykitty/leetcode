"""
509. Fibonacci Number

Submitted: October 24, 2024

Runtime: 44 ms (beats 43.14%)
Memory: 17.60 MB (beats 89.43%)
"""

class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        a = 0
        b = 1
        for _ in range(n-1):
            c = a + b
            a = b
            b = c
        return b