"""
78. Subsets

Submitted: January 20, 2025

Runtime: 0 ms (beats 100.00%)
NenirtL 17.74 MB (beats 53.75%)
"""

class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        # https://docs.python.org/3/library/itertools.html#itertools-recipes, powerset
        return list(chain.from_iterable(combinations(nums, r) for r in range(len(nums)+1)))