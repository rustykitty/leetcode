"""
1. Two Sum

Submitted: January 16, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 19.00 MB (beats 19.63%)
"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        return next(x for x in (
            (i, d[target - nums[i]]) if ((target - nums[i]) in d) else d.update({ nums[i]: i })
            for i in range(len(nums))
            ) if x is not None
        )