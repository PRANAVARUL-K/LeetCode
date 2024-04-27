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
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        while(head != NULL)
        {
            res.push_back(head->val);
            head = head->next;
        }
        int l = 0,r = res.size()-1;
        while(l < r)
        {
            if(res[l] != res[r])
                return false;
            l++;r--;
        }
        return true;
    }
};