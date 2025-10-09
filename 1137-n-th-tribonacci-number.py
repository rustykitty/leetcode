"""
1137. N-th Tribonacci Number

Submitted: October 7, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.90 MB (beats 29.77%)
"""

class Solution:
    def tribonacci(self, n: int) -> int:
        a = 0
        b = 1
        c = 1
        if n == 0:
            return 0
        elif n == 1 or n == 2:
            return 1
        for _ in range(n-2):
            d = a + b + c
            a = b
            b = c
            c = d
        return c