/*
2415. Reverse Odd Levels of Binary Tree

LeetCode Daily Question for December 20, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 79.82 MB (beats 57.48%)
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (root == nullptr) return root;
        deque<TreeNode*> queue;
        int level = 0;
        queue.push_back(root);
        while (!queue.empty()) {
            // level order traversal stuff
            for (int i = 0, n = queue.size(); i < n; ++i) {
                TreeNode* p = queue.back();
                queue.pop_back();
                if (p->left != nullptr) queue.push_front(p->left);
                if (p->right != nullptr) queue.push_front(p->right);
            }
            if (++level & 1) { // if level is odd
                // reverse node values
                for (int i = 0, n = queue.size(); i < n / 2; ++i) {
                    swap(queue[i]->val, queue[n - i - 1]->val);
                }
            }
        }
        return root;
    }
};