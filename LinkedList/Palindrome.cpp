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
    ListNode* reversse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* frwd=curr->next;
        while(curr!=NULL){
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        if(head->next==NULL){
            return true;
        }
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        //slow is middle;
        ListNode* rvhead=reversse(slow->next);
        slow->next=rvhead;
        ListNode*temp1=head;
        ListNode*temp2=rvhead;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
};
