/*
23. Merge k Sorted Lists

Submitted: December 12, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 18.28 MB (beats 84.05%)
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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode* a, ListNode* b) { return std::greater<int>()(a->val, b->val); };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq;
        for (ListNode* list : lists) {
            if (list != nullptr) pq.push(list);
        }
        ListNode* newHead = nullptr;
        ListNode* newTail = nullptr;
        while (!pq.empty()) {
            ListNode* p = pq.top();
            pq.pop();
            if (p->next != nullptr) pq.push(p->next);
            if (newHead == nullptr) {
                newHead = p;
                newTail = p;
            } else {
                newTail->next = p;
                newTail = newTail->next;
            }
        }
        return newHead;
    }
};
