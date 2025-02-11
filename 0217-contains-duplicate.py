"""
217. Contains Duplicate

Submitted: February 7, 2025
Runtime: 18 ms (beats 20.84%)
Memory: 31.66 MB (beats 30.18%)
"""

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)