class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        stack<int>s;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp && temp->val==s.top()){
            s.pop();
            temp=temp->next;
        }
        return temp==NULL;
    }
};
