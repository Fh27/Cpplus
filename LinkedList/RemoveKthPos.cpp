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
int getlenght(ListNode* head){
    ListNode* curr=head;
    int len=0;

    while(curr){
        len++;
        curr=curr->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        if(n==0) return head;
        int length=getlenght(head);
        int actual=length-n;
        int cnt=1;
        ListNode* curr=head;
        if(length==n) {
            curr=curr->next;
            return curr;
        }
        while(cnt<actual && curr ){
            curr=curr->next;
            cnt++;
        }
        curr->next=curr->next->next;
        return head;
    }
};
