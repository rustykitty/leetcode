/*
700. Search in a Binary Search Tree

Submitted: December 7, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 35.52 MB (beats 8.78%)
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
    TreeNode* searchBST(TreeNode* root, const int val) {
        while (true) {
            if (root == nullptr) return nullptr;
            if (root->val == val) return root;
            if (root->val > val) root = root->left;
            else if (root->val < val) root = root->right;
        }
    }
};