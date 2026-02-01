"""
3370. Smallest Number With All Set Bits

Daily Question for October 29, 2025

Runtime: 1 ms (beats 20.63%)
Memory: 17.72 MB (beats 56.86%)
"""

class Solution:
    def smallestNumber(self, n: int) -> int:
        p = 2
        while p <= n:
            p *= 2
        return p - 1
