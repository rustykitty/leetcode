"""
46. Permutations

Submitted: January 23, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.71 MB (beats 60.66%)
"""

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        return list(permutations(nums))