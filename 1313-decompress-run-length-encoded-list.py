"""
1313. Decompress Run-Length Encoded List

Submitted: November 15, 2024

Runtime: 4 ms (beats 8.73%)
Memory: 16.84 MB (beats 60.89%)
"""

import functools

class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        i = iter(nums)
        return functools.reduce(lambda x, y: x + y, (next(i) * [next(i)] for _ in range(len(nums) >> 1)), [])
