"""
1365. How Many Numbers Are Smaller Than the Current Number

Submitted: December 6, 2024

Runtime: 174 ms (beats 13.07%)
Memory: 17.28 MB (beats 13.74%)
"""

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        return [len(list(None for y in nums[:i] + nums[i + 1:] if y < nums[i])) for i in range(len(nums))]