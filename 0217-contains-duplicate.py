"""
217. Contains Duplicate

Submitted: October 4, 2024
Runtime: 414 ms (beats 5.53%)
Memory: 35.63 MB (beats 8.45)
"""

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        map = {}
        for i in range(len(nums)):
            if nums[i] in map:
                return True
            map[nums[i]] = i
        return False
