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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0) 
            return head;
        int length = 1;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            length++;
            temp = temp->next;
        }
        ListNode* last = temp;
        k = k % length; 
        if (k == 0) 
            return head;
        int val;
        for(int i = 0; i < k; i++)
        {
            temp = head->next;
            val = head->val;
            head->val = last->val;
            while (temp->next != NULL && temp != NULL)
            {
                int t = temp->val;
                temp->val = val;
                val = t;
                temp = temp->next;
            }
            temp->val = val;
        }
        return head;
    };

};