 bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast){
            fast=fast->next;
            if(fast){
                fast=fast->next;
                slow=slow->next;
            }
            if(slow==fast) return true;
        }
        return false;
    }
