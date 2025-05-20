"""
283. Move Zeroes

Submitted: May 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 19.08 MB (beats 9.79%)
"""

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # technically modifying in place...
        nums[:] = [i for i in nums if i != 0] + [0] * nums.count(0)