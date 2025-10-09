"""
112. Path Sum

Submitted: June 18, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 19.12 MB (beats 23.39%)
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root: return False
        if root.left or root.right:
            return self.hasPathSum(root.left, targetSum - root.val) or self.hasPathSum(root.right, targetSum - root.val)
        return targetSum == root.val