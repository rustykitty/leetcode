"""
1920. Build Array from Permutation

Submitted: October 16, 2024

Runtime: 105 ms (beats 7.96%)
Memory: 16.70 MB (beats 82.92%)
"""

class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        return [nums[nums[i]] for i in range(len(nums))]