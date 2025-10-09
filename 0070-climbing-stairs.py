"""
70. Climbing Stairs

Submitted: January 9th, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.87 MB (beats 30.40%)
"""

class Solution:
    def climbStairs(self, n: int) -> int:
        a = 0
        b = 1
        for _ in range(n):
            c = a + b
            a = b
            b = c
        return b
