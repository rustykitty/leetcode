/*
700. Search in a Binary Search Tree

Submitted: November 25, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 33.56 MB (beats 59.28%)
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
    TreeNode* searchBST(TreeNode*& root, const int& val) {
        if (root == nullptr) return nullptr;
        if (root->val == val) return root;
        TreeNode *left = searchBST(root->left, val);
        TreeNode *right = searchBST(root->right, val);
        if (left != nullptr && left->val == val) return left;
        else if (right != nullptr && right->val == val) return right;
        else {
            return root->val == val ? root : nullptr;
        }
    }
};
