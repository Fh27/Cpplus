/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node* head){
        Node* temp=head;
        while(temp){
            Node* copynode=new Node(temp->val);
            copynode->next=temp->next;
            temp->next=copynode;
            temp=temp->next->next;
        }
       
    }
    void assignrondom(Node* head){
        Node* temp=head;
        while(temp){
            Node* copynode=temp->next;
            if(temp->random)copynode->random=temp->random->next;
           else copynode->random=NULL;
            temp=temp->next->next;
        }
    }
    Node* detach(Node* head){
        Node* dummy=new Node(-1);
        Node* res=dummy;
        Node* temp=head;
        while(temp){
            Node* copy=temp->next;
            res->next=copy;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        insert(head);
        assignrondom(head);
        return detach(head);
    }
};
