/*
116. Populating Next Right Pointers in Each Node

Submitted: December 8, 2024

Runtime: 11 ms (beats 48.73%)
Memory: 18.80 MB (beats 35.89%)
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
        deque<Node*> queue;
        queue.push_back(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                Node* p = queue.back();
                queue.pop_back();
                if (i < n - 1) p->next = queue.back();
                if (p->left != nullptr) queue.push_front(p->left);
                if (p->right != nullptr) queue.push_front(p->right);
            }
        }
        return root;
    }
};