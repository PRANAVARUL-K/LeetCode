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
        if(head==NULL || head->next==NULL||k==0)
            return head;
        ListNode* curr=head;
        int l=0;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            l++;
        }
        curr->next=head;
        curr = head;
        k=k%(l+1);
        int rotate=l-k; 
        while(rotate!=0)
        {
            curr=curr->next;
            rotate=rotate-1;
        }
        ListNode* temp=curr->next;
        curr->next=NULL;
        return temp;
       /* if (head == nullptr || k == 0 || head->next == NULL) 
            return head;
        int length = 1;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            length++;
            temp = temp->next;
        }
        ListNode* last = temp;
        temp->next = head;
        k = k % length; 
        if (k == 0 || length == 1) 
            return head;
        temp = head;
        while(k>=0)
        {
            last = temp;
            temp = temp->next;
            k--;
        }
        head = temp;
        temp = head;
        while(temp != last)
            temp = temp->next;        
        last->next = NULL;
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
        return head;*/
        return head;
    };

};