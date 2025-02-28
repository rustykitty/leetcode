"""
1749. Maximum Absolute Sum of Any Subarray

Submitted: February 26, 2025

Runtime: 60 ms (beats 62.45%)
Memory: 28.43 MB (beats 62.31%)
"""

class Solution:

    def maxAbsoluteSum(self, nums: List[int]) -> int:
        return max(abs(self.maxSum(nums)), abs(self.minSum(nums)))

    def maxSum(self, nums):
        res = float('-inf')
        c = 0
        for n in nums:
            # c = max(n, c + n)
            c = (c + n) if c > 0 else n
            res = max(res, c)
        return res

    def minSum(self, nums):
        res = float('inf')
        c = 0
        for n in nums:
            # c = max(n, c + n)
            c = (c + n) if c < 0 else n
            res = min(res, c)
        return res

        
