"""
94. Binary Tree Inorder Traversal

Submitted: March 2, 2023

Runtime: 32 ms (beats 100.00%)
Memory: 13.92 MB (beats 100.00%)
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        f=[]
        def z(n):
            if n is None:
                return
            z(n.left)
            f.append(n.val)
            z(n.right)
        z(root)
        return f
