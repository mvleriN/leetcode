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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return;
        }
        ListNode* node = head;
        while (node->next->next != nullptr) {
            node = node->next;
        }

        node->next->next = head->next;
        head->next = node->next;
        node->next = nullptr;
        reorderList(head->next->next);
    }
};