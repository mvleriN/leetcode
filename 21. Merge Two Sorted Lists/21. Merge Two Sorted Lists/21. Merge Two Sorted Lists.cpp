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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode ans(0);
        ListNode* curr = &ans;
        while (true) {
            if (a == nullptr && b == nullptr) {
                return ans.next;
            }
            else {
                if (a == nullptr) {
                    curr->next = b;
                    return ans.next;
                }
                else {
                    if (b == nullptr) {
                        curr->next = a;
                        return ans.next;
                    }
                    else {
                        if (a->val < b->val) {
                            curr->next = a;
                            curr = a;
                            a = a->next;
                        }
                        else {
                            curr->next = b;
                            curr = b;
                            b = b->next;
                        }
                    }
                }
            }
        }
        return ans.next;
    }
};