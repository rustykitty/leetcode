"""
34. Find First and Last Position of Element in Sorted Array

Submitted: February 5, 2026

Runtime: 0 ms (beats 100.00%)
Memory: 20.82 MB (beats 20.82%)
"""

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        lo = bisect.bisect_left(nums, target)
        if lo >= len(nums) or nums[lo] != target:
            return (-1, -1)
        hi = bisect.bisect(nums, target)
        return (lo, hi - 1)