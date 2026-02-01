"""
509. Fibonacci Number

Submitted: October 20, 2025

Runtime: 28 ms (beats 96.94%)
Memory: 17.92 MB (beats 22.47%)
"""

class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        a = 0
        b = 1
        for _ in range(n-1):
            b += a
            a = b - a
        return b