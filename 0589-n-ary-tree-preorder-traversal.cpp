/*
589. N-ary Tree Preorder Traversal

Submitted: December 2, 2024

Runtime: 14 ms (beats 47.33%)
Memory: 15.65 MB (beats 14.49%)
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        traversalHelper(result, root);
        return result;
    }
    void traversalHelper(vector<int>& vec, Node* root) {
        if (root == nullptr) return;
        vec.push_back(root->val);
        for (Node* child : root->children) {
            traversalHelper(vec, child);
        }
    }
};
