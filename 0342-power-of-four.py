"""
342. Power of Four

Submitted: August 12, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.69 MB (beats 87.76%)
"""

class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        # n is power of two, 0x55555555 includes every odd digit
        return n > 0 and (n & (n - 1)) == 0 and (n & 0x55555555) != 0