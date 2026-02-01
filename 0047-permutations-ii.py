"""
47. Permutations II

Submitted: March 28, 2025

Runtime: 239 ms (beats 12.60%)
Memory: 23.88 MB (beats 5.08%)
"""

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) < 2: 
            return [nums]
        elif len(nums) == 2:
            return [nums, list(reversed(nums))]
        return list(
            itertools.chain.from_iterable(
                [[nums[i]] + v for v in self.permute(nums[:i] + nums[i+1:])] 
                for i in range(len(nums))
            )
        )
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        return list(set(tuple(x) for x in self.permute(nums)))