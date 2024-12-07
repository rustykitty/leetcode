/*
1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree

Submitted: December 6, 2024

Runtime: 361 ms (beats 70.33%)
Memory: 167.52 MB (beats 9.91%)
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return binarySearch(cloned, target->val);
    }
    TreeNode* binarySearch(TreeNode* root, int val) {
        if (root == nullptr) return nullptr;
        if (root->val == val) return root;
        TreeNode *left = binarySearch(root->left, val);
        TreeNode *right = binarySearch(root->right, val);
        if (left != nullptr && left->val == val) return left;
        else if (right != nullptr && right->val == val) return right;
        else {
            return root->val == val ? root : nullptr;
        }
    }
};