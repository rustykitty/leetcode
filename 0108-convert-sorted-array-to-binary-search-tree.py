"""
108. Convert Sorted Array to Binary Search Tree

Submitted: Feb 01, 2026

Runtime: 0 ms (beats 100.00%)
Memory: 20.35 MB (beats 20.35%)
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        # print(nums)
        if not nums: return None
        if len(nums) == 1: return TreeNode(nums[0])
        mid_index = len(nums) // 2
        left = self.sortedArrayToBST(nums[:mid_index])
        right = self.sortedArrayToBST(nums[mid_index+1:])
        return TreeNode(nums[mid_index], left, right)