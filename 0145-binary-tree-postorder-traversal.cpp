/*
145. Binary Tree Postorder Traversal

December 2, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.90% (beats 15.34%)
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traversalHelper(result, root);
        return result;
    }
    void traversalHelper(vector<int>& vec, TreeNode* root) {
        if (root == nullptr) return;
        traversalHelper(vec, root->left);
        traversalHelper(vec, root->right);
        vec.push_back(root->val);
    }
};
