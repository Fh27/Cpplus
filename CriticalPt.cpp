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
        vector<int>ans={-1,-1};
        ListNode*prev=head;
        if(!prev) return ans;
        ListNode*curr=head->next;
        if(!curr) return ans;
        ListNode*fr=head->next->next;
        if(!fr)return ans;
        int mindis=INT_MAX;
        int fcp=-1;
        int lcp=-1;
        int i=1;
        while(fr){
            bool cp=(prev->val<curr->val && curr->val>fr->val || prev->val>curr->val && curr->val<fr->val)?true:false;
            if(cp && fcp==-1){
                fcp=i;
                lcp=i;
            }
            else if(cp){
                mindis=min(mindis,i-lcp);
                lcp=i;
            }
            i++;
            prev=prev->next;
            curr=curr->next;
            fr=fr->next;
        }
        if(fcp==lcp){
            return ans;
        }
        else{
            ans[0]=mindis;
            ans[1]=lcp-fcp;
        }
        return ans;

    }
};
