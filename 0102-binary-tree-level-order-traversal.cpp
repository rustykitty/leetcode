/*
102. Binary Tree Level Order Traversal

Submitted: January 13, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.24 MB (beats 14.20%)
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        vector<vector<int>> res;
        deque<TreeNode*> queue;
        queue.push_front(root);
        while (!queue.empty()) {
            vector<int> v;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                TreeNode* p = queue.back();
                queue.pop_back();
                v.push_back(p->val);
                if (p->left != nullptr) queue.push_front(p->left);
                if (p->right != nullptr) queue.push_front(p->right);
            }
            res.push_back(v);
        }
        return res;
    }
};