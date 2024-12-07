/*
104. Maximum Depth of Binary Tree

Submitted: December 6, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 19.09 MB (beats 6.14%)
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return left >= right ? left + 1 : right + 1;
    }
};