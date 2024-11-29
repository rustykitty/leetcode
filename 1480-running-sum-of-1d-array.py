"""
1480. Running Sum of 1d Array

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 16.90 MB (beats 24.88%)
"""

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = 0
        return [(res := res + i) for i in nums]