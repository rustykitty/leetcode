/*
590. N-ary Tree Postorder Traversal

Submitted: December 2, 2024

12 ms (beats 66.60%)
Memory: 15.64 MB (beats 18.30%)
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
    vector<int> postorder(Node* root) {
        vector<int> result;
        traversalHelper(result, root);
        return result;
    }
    void traversalHelper(vector<int>& vec, Node* root) {
        if (root == nullptr) return;
        for (Node* child : root->children) {
            traversalHelper(vec, child);
        }
        vec.push_back(root->val);
    }
};
