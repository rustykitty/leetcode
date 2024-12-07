"""
3162. Find the Number of Good Pairs I

Submitted: December 6, 2024

Runtime: 15 ms (beats 7.34%)
Memory: 17.34 MB (beats 6.26%)
"""

class Solution:
    def numberOfPairs(self, nums1: List[int], nums2: List[int], k: int) -> int:
        # in the inner generator sum is used to count how many elements a condition is true for
        return sum(sum((nums1[i] % (nums2[j] * k) == 0) for j in range(len(nums2))) for i in range(len(nums1)))