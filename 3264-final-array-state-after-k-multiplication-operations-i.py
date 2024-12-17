"""
3264. Final Array State After K Multiplication Operations I

LeetCode Daily Question for December 15, 2024

Runtime: 255 ms (beats 5.80%)
Memory: 17.51 MB (beats 12.46%)
"""

class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        return reduce(
            lambda x, _: [x[i] * multiplier if i == (min(enumerate(x), key = (lambda e: e[1]))[0]) else x[i] for i in range(len(x))],
            range(k),
            nums
        )
