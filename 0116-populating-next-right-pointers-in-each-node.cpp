/*
116. Populating Next Right Pointers in Each Node

Submitted: December 8, 2024

Runtime: 11 ms (beats 82.54%)
Memory: 18.81 MB (beats 73.03%)
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) return nullptr;
        if (root->left == nullptr) return root;
        root->left->next = root->right;
        for (Node* p = root; p->next != nullptr; ) {
            p->right->next = p->next->left;
            p = p->next;
            p->left->next = p->right;
        }
        connect(root->left);
        return root;
    }
};