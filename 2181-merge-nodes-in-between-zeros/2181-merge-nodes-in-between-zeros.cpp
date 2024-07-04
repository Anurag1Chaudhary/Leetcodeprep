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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* originalhead=head;
        ListNode* curr=head->next;
        int s=0;
        while(curr!=NULL)
        {
            if(curr->val==0)
            {
                head->val=s;
                s=0;
                if(curr->next!=NULL)
                   head=head->next;
            }
            s+=curr->val;
            curr=curr->next;
            
        }
        head->next=NULL;
        return originalhead;
    }
};