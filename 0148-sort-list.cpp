/*
148. Sort List

Submitted: February 11, 2025

Runtime: 7 ms (beats 96.40%)
Memory: 55.79 MB (beats 99.18%)
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
            if (head == nullptr || head->next == nullptr) return head;
            int size = 0;
            for (ListNode* p = head; p != nullptr; p = p->next) ++size;
            if (size == 2) {
                if (head->val > head->next->val) swap(head->val, head->next->val);
                return head;
            }
            ListNode* beforeHalf = head;
            for (int i = 0; i < (size / 2) - 1; ++i) beforeHalf = beforeHalf->next;
            ListNode* half = beforeHalf->next;
            beforeHalf->next = nullptr;
            ListNode* newHead = mergeTwoLists(sortList(head), sortList(half));
            return newHead;
        }
        // from 21-merge-two-sorted-lists
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if (list1 == nullptr) return list2;
            if (list2 == nullptr) return list1;
            ListNode* head = list1->val > list2->val ? list2 : list1;
            if (head == list1) list1 = list1->next;
            else list2 = list2->next;
            ListNode* tail = head;
            while (list1 != nullptr && list2 != nullptr) {
                if (list1->val > list2->val) {
                    tail->next = list2;
                    list2 = list2->next;
                } else {
                    tail->next = list1;
                    list1 = list1->next;
                }
                tail = tail->next;
            }
            tail->next = list1 == nullptr ? list2 : list1;
            return head;
        }
    };