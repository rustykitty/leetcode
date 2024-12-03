/*
2331. Evaluate Boolean Binary Tree

Submitted: December 2, 2024

0 ms (beats 100.00%)
24.32 MB (beats 5.76%)
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
    bool evaluateTree(TreeNode* root) {
        if (root->val == 0 || root->val == 1) return (bool) root->val;
        else if (root->val == 2) return evaluateTree(root->left) || evaluateTree(root->right);
        else return evaluateTree(root->left) && evaluateTree(root->right);
    }
};
