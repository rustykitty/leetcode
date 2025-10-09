/*
382. Linked List Random Node

Submitted: May 21, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 23.23 MB (beats 80.56%)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

size_t listlen(ListNode* __restrict__ head) {
    size_t res = 0;
    while (head) {
        ++res;
        head = head->next;
    }
    return res;
}

ListNode* listind(ListNode* __restrict__ head, size_t ind) {
    while (ind) {
        if (!head) {
            return nullptr;
        }
        --ind;
        head = head->next;
    }
    return head;
}

class Solution {
private:
    ListNode* head;
    size_t size;
public:
    Solution(ListNode* head) : head(head), size(listlen(head)) {}
    
    int getRandom() {
        ListNode* p = listind(head, (rand() % size));
        if (!p) {
            throw new runtime_error("Error");
        }
        return p->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */