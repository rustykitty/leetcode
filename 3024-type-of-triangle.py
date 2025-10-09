"""
3024. Type of Triangle

Submitted: June 18, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.51 MB (beats 96.23%)
"""

equilateral = "equilateral"
isosceles = "isosceles"
scalene = "scalene"
none = "none"
class Solution:
    def triangleType(self, nums: List[int]) -> str:
        nums.sort()
        if nums[0] == nums[1] == nums[2]: return equilateral
        if nums[0] + nums[1] <= nums[2]: return none
        if nums[0] == nums[1] or nums[1] == nums[2]: return isosceles
        return scalene
