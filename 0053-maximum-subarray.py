"""
53. Maximum Subarray

Submitted: February 26, 2025

Runtime: 56 ms (beats 63.17%)
Memory: 32.92 MB (beats 7.45%)
"""

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = float('-inf')
        c = 0
        for n in nums:
            # c = max(n, c + n)
            c = (c + n) if c > 0 else n
            res = max(res, c)
        return res