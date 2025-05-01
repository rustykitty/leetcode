"""
46. Permutations

Submitted: March 28, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 18.02 MB (beats 32.93%)
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