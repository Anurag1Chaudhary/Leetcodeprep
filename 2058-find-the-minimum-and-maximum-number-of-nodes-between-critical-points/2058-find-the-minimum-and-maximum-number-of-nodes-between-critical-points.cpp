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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> l;
        vector<int> ans(2, -1);
        
        if (head == nullptr || head->next == nullptr || head->next->next==nullptr) 
            return ans; 

        ListNode* temp = head->next;
        ListNode* prev = head;
        int i = 1;
        
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val < temp->next->val && temp->val < prev->val)          
                l.push_back(i);
            else if (temp->val > temp->next->val && temp->val > prev->val) 
                l.push_back(i);
            
            i++;
            prev = temp;
            temp = temp->next;
        }

        int n = l.size();
        if (n < 2) return ans;
        
        int min_diff = l[n - 1] - l[n - 2];
        int max_diff = l[n - 1] - l[0];

        for (int k = 1; k < n - 1; k++) {
            min_diff = min(min_diff, l[k] - l[k - 1]);
        }

        ans[0] = min_diff;
        ans[1] = max_diff;

        return ans;
        
    }
};