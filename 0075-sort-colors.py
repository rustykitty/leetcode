"""
75. Sort Colors

Submitted: November 4, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.91 MB (beats 50.88%)
"""

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero_count = nums.count(0)
        one_count = nums.count(1)
        two_count = nums.count(2)
        nums[:] = [*[0] * zero_count, *[1] * one_count, *[2] * two_count]