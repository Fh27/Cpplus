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
    Node* copyRandomList(Node* head) {
        if(!head) return 0;
        //attach
        Node* it=head;
        while(it){
            Node* newnode=new Node(it->val);
            newnode->next=it->next;
            it->next=newnode;
            it=it->next->next;
        }
        //random pointer
        it=head;
        while(it){
            Node*newnode=it->next;
            newnode->random=it->random ?it->random->next : nullptr;
            it=it->next->next;
        }
        //detach real and copy
        it=head;
        Node* cloneHead=it->next;
        while(it){
            Node*clone=it->next;
            it->next=it->next->next;       //by mistake it was it onlyy but fixed it
            if(clone->next){
                clone->next=clone->next->next;
            }
            it=it->next;
        }
        return cloneHead;
    }
};
