/*
160. Intersection of Two Linked Lists

Submitted: May 31, 2025

Runtime: 40 ms (beats 37.90%)
Memory: 20.66 MB (beats 17.77%)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;
        vector<ListNode*> listA, listB;
        for (auto p = headA; p; p = p->next) listA.push_back(p);
        for (auto p = headB; p; p = p->next) listB.push_back(p);
        if (listA.back() != listB.back()) return nullptr;
        if (listB.size() > listA.size()) swap(listA, listB);
        for (
            auto itA = listA.begin() + (listA.size() - listB.size()), itB = listB.begin();
            itA != listA.end(); ++itA, ++itB
        ) {
            if (*itA == *itB) return *itA;
        }
        throw new runtime_error("Error");
    }
};