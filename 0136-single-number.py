"""
136. Single Number

Runtime: 4 ms (beats 48.81%)
Memory: 19.51 MB (beats 6.17%)
"""

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        return functools.reduce(lambda x, y: x ^ y, nums)