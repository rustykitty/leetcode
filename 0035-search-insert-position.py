"""
35. Search Insert Position

Submitted: November 3, 2022

Runtime: 69 ms (beats 5.67%)
Memory: 14.68 MB (beats 100.00%)
"""

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        def bs(a, h, l, x): # begin binary search function
            if h >= l:
                m = (h + l) // 2
                if a[m] == x:
                    return m
                elif a[m] > x:
                    return bs(a, l, m - 1, x)
                else:
                    return bs(a, l, m + 1, x)
            else:
                return -1
        # end binary search function
        if target in nums: 
            r = bs(nums, len(nums), 0, target)
            if r >= 0:
                return r
            else: # O(n) fallback if binary search doesn't work
                for i in range(len(nums)):
                    j = nums[i]
                    if j == target:
                        return i
        else: # find the first position where nums[i] is greater than target,
            if target > nums[-1]: # so we can insert *before* that position
                return len(nums)
            elif target < nums[0]:
                return 0
            else:
                for i in range(len(nums)):
                    if nums[i] > target:
                        return i
        return -1 # not found