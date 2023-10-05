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
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*, int>m;

        ListNode*temp= head;  // 3, 1
                              // 2,1
  //[3,2,0,-4], 
        while(temp!=NULL)
        {
            if(m[temp]==1) return true;

            m[temp]=1;
            temp= temp->next;
        }

        return false;
        // t-c> O(N)
        // s.c-> O(N)
        
    }
};