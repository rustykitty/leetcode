"""
3467. Transform Array by Parity

Submitted: May 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.67 MB (beats 96.40%)
"""

class Solution:
    def transformArray(self, nums: List[int]) -> List[int]:
        return sorted(
            n % 2 for n in nums
        )