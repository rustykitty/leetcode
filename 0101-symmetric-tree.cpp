/*
101. Symmetric Tree

Submitted: December 9, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 18.41 MB (beats 12.19%)
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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return helper(root->left, root->right);
    }
    bool helper(TreeNode* a, TreeNode* b) {
        if (a == nullptr || b == nullptr) return a == b;
        if (a->val != b->val) return false;
        return helper(a->left, b->right) && helper(a->right, b->left);
    }
};