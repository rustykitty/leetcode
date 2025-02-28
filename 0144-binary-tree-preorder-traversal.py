"""
144. Binary Tree Preorder Traversal

Submitted: February 13, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.68 MB (beats 83.66%)
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return []
        return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)