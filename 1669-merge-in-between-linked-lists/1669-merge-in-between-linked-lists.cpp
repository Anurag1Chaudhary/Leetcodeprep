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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int i=0;
        while(i<a-1)
        {
            temp=temp->next;
            i++;
        }
        ListNode* anode=temp;
        while(i<b)
        {
            temp=temp->next;
            i++;
        }
        ListNode* bnode=temp;
        anode->next=list2;
        while(list2->next)
        {
            list2=list2->next;
        }
        list2->next=bnode->next;
        return list1;
    }
};