"""
771. Jewels and Stones

Submitted: November 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.57 MB (beats 17.57%)
"""

class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jewels = set(jewels)
        res = 0
        for stone in stones:
            if stone in jewels:
                res += 1
        return res