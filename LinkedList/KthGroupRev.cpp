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
int getl(ListNode* head){
    ListNode* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int len=getl(head);
        if(k>len) {
            return head;
        }
        ListNode* prev=NULL;
        ListNode*curr=head;
        ListNode*fr=curr->next;
        int cnt=0;
        while(cnt<k){
            fr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fr;
            cnt++;
        }
        if(fr!=NULL){
        head->next=reverseKGroup(fr,k);
        }
        return prev;
    }
};
