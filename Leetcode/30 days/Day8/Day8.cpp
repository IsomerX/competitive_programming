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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1;
        ListNode* temp2;
        temp1 = temp2 = head;
        while (temp2->next != NULL && temp2 != NULL) {
            temp1 = temp1->next;
            if (temp2->next->next != NULL)
                temp2 = temp2->next->next;
            else
                temp2 = temp2->next;
        }
        return temp1;
    }
};