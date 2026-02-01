"""
169. Majority Element

Submitted: December 14, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 19.25 MB (beats 19.25%)
"""

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums) // 2]