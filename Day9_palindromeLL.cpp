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
        //1 2 3 3 2 1 ->palindrome 
        // 1 2 3 2 3 1 -> not palindrome

        if(head==NULL) return NULL;

        stack<int>s;  //lifo 
        ListNode*curr= head;
        while(curr!=NULL)
        {
            s.push(curr->val);
            curr= curr->next;
        }

        while(!s.empty())
        {
            int top= s.top();
            s.pop();
            if(top!=head->val) return false;
            head= head->next;
        }

        return true;
        // t-c-> O(N)
        // s.c->O(N)
        
    }
};