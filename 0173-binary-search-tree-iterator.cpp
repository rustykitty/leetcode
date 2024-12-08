/*
173. Binary Search Tree Iterator

Submitted: December 8, 2024

Runtime: 3 ms (beats 70.78%)
Memory: 32.22 MB (beats 6.21%)
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
class BSTIterator {
private:
    vector<int> arr;
    vector<int>::const_iterator pos;
    void traverse(TreeNode* root) {
        if (root == nullptr) return;
        traverse(root->left);
        arr.push_back(root->val);
        traverse(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        traverse(root);
        pos = arr.cbegin();
    }
    
    int next() {
        return *pos++;
    }
    
    bool hasNext() {
        return pos != arr.cend();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */