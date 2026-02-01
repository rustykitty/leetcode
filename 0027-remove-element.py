"""
27. Remove Element

Submitted: October 21, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.67 MB (beats 82.61%)
"""

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        return k