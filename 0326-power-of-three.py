"""
326. Power of Three

Submitted: August 15, 2025

Runtime: 12 ms (beats 40.84%)
Memory: 17.74 MB (beats 72.28%)
"""

import math 

class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        return n > 0 and (n & 0x01) == 0x01 and (n & 0x04) == 0 and 3 ** round(math.log(n, 3), 8) == n