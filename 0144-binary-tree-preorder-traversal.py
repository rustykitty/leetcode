"""
144. Binary Tree Preorder Traversal

Submitted: March 2, 2023

Runtime: 41 ms (beats 100.00%)
Memory: 13.84 MB (beats 100.00%)
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        b=[]
        def t(root):
            if root is None:
                return
            b.append(root.val)
            t(root.left)
            t(root.right)
        t(root)
        return b