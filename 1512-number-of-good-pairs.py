"""
1512. Number of Good Pairs

Submitted: November 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.92 MB (beats 44.64%)
"""

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        c = Counter(nums)
        res = 0
        for k, v in c.items():
            res += v * (v - 1) // 2
        return res