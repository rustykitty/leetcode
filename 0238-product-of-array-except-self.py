"""
238. Product of Array Except Self

Submitted: November 4, 2025

Runtime: 43 ms (beats 11.88%)
Memory: 27.10 MB (beats 18.19%)
"""

from itertools import accumulate

multiply = lambda x, y: x * y

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = list(accumulate(nums, multiply))
        suffix = list(accumulate(reversed(nums), multiply))[::-1]

        arr = []

        for i in range(len(nums)):
            if i == 0:
                arr.append(suffix[i + 1])
            elif i == len(nums) - 1:
                arr.append(prefix[i - 1])
            else:
                arr.append(prefix[i - 1] * suffix[i + 1])

        return arr