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
    ListNode* reverseee(ListNode* head,ListNode* prev){
            ListNode* curr=head;
            if(curr==NULL){
                return prev;
            }
            ListNode* temp=curr->next;
                curr->next=prev;
               return reverseee(temp,curr);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
       head=reverseee(head,prev);
       return head;
    }
};
