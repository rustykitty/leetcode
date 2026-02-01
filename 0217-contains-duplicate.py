"""
217. Contains Duplicate

Submitted: December 13, 2025

Runtime: 54 ms (beats 5.15%)
Memory: 28.36 MB (beats 28.36%)
"""

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums = sorted(nums)
        previous = nums[0]
        for num in nums[1:]:
            if previous == num:
                return True
            previous = num
        return False