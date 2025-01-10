"""
70. Climbing Stairs

Submitted: January 9th, 2025

Runtime: 1 ms (beats 3.84%)
Memory: 17.59 MB (beats 37.71%)
"""

class Solution:
    @functools.lru_cache(maxsize=45)
    def climbStairs(self, n: int) -> int:
        if n == 0 or n == 1:
            return 1
        else:
            return self.climbStairs(n - 1) + self.climbStairs(n - 2)