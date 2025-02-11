/*
148. Sort List

Submitted: February 10, 2025

Runtime: 7 ms (beats 96.37%)
Memory: 58.09 MB (beats 75.27%)
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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        for (ListNode* p = head; p != nullptr; p = p->next) v.push_back(p->val); 
        sort(v.begin(), v.end());
        auto it = v.cbegin();
        for (ListNode* p = head; p != nullptr && it != v.cend(); p = p->next, ++it) p->val = *it;
        return head;
    }
};