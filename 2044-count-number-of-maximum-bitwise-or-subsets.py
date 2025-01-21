"""
2044. Count Number of Maximum Bitwise-OR Subsets

Submitted: January 20, 2025

Runtime: 796 MB (beats 23.50%)
Memory: 17.93 MB (beats 36.21%)
"""

class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        # derived from https://docs.python.org/3/library/itertools.html#itertools-recipes, powerset
        max_or = reduce((lambda x, y: x | y), nums, 0)
        return sum(
            reduce((lambda x, y: x | y), it, 0) == max_or for it in chain.from_iterable(combinations(nums, r) for r in range(len(nums)+1))
        )
