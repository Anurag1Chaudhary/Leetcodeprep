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
        if (head == nullptr) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        
        //middle point can be find out using two point of slow and fast
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        ListNode* secondHalf = reverse(slow);
        
        // Compare the first half and the reversed second half
        while (secondHalf != NULL) {
            if (head->val != secondHalf->val) {
                return false;
            }
            head = head->next;
            secondHalf = secondHalf->next;
        }
        
        return true;
    }
    
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* temp=head->next;
        head->next=NULL;
        ListNode* ans=reverse(temp);
        temp->next=head;
        return ans;
    }
};

