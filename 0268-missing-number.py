"""
268. Missing Number

Submitted: Dec 13, 2025

Runtime: 8 ms (beats 27.96%)
Memory: 18.86 MB (beats 18.86%)
"""

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        previous = nums[0]
        if nums[0] != 0:
            return 0
        for num in nums[1:]:
            if num - 1 != previous:
                return num -1
            previous = num
        return len(nums)