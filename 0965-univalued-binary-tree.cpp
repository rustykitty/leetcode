/*
965. Univalued Binary Tree

Submitted: January 13, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 12.69 MB (beats 29.98%)
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
    int val = -1;
    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr) return true;
        if (val == -1) val = root->val;
        if (root->val != val) return false;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};
