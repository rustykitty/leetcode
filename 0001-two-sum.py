"""
1. Two Sum
First solved: February 27, 2024
Last solved: November 22, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.98 MB (beats 14.36%)

"""


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i in range(len(nums)):
            want = target - nums[i]
            if want in d:
                return [i, d[want]]
            else:
                d[nums[i]] = i
        