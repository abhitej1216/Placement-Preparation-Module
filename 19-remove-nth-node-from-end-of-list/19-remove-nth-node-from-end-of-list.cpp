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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        int c=0;
        while(curr!=NULL)
        {
c++;
        curr=curr->next;}
         if(c==n)
      {
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
        
        int x=c-n-1;
        ListNode *curr2=head;
        
        while(x--)
        {
            curr2=curr2->next;
            
        }
        
        curr2->next=curr2->next->next;
        return head;
        
    }
};