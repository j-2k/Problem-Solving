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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* PREV = NULL;
        ListNode* CURR = head;

        while(CURR != NULL)
        {
            ListNode* temp = CURR->next;
            CURR->next = PREV;
            PREV = CURR;
            CURR = temp;
        }

        return PREV;

    }
};
