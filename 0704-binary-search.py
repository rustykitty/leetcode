"""
704. Binary Search

Submitted: January 31, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 18.59 MB (beats 82.38%)
"""

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        min = 0
        max = len(nums) - 1
        while min <= max:
            mid = (max + min) // 2
            if nums[mid] == target: return mid
            elif nums[mid] < target: min = mid + 1
            elif nums[mid] > target: max = mid - 1
        return -1