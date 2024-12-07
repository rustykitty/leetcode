/*
559. Maximum Depth of N-ary Tree

Submitted: December 6, 2024

Runtime: 12 ms (beats 66.05%)
Memory: 14.52 MB (beats 42.04%)
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
    int maxDepth(Node* root) {
        if (root == nullptr) return 0;
        int max = 0;
        for (Node* child : root->children) {
            int child_depth = maxDepth(child);
            if (child_depth > max) max = child_depth;
        }
        return max + 1;
    }
};