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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node = head;
        int size = 0;

        while (node != nullptr) {
            node = node->next;
            size++;
        }
        if (size == 1 || size == n)
            return head->next;

        node = head;
        for (int i = 0; i < size - n - 1; ++i) {
            node = node->next;
        }

        node->next = node->next->next;
        return head;
    }
};