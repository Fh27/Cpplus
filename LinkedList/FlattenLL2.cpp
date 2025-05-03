
class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* merge(Node* l1,Node* l2){
        Node* dummynode=new Node(-1);
        Node* res=dummynode;
        while(l1 && l2){
            if(l1->data <l2->data){
                res->bottom=l1;
                res=l1;
                l1=l1->bottom;
            }
            else{
                res->bottom=l2;
                res=l2;
                l2=l2->bottom;
            }
        }
        if(l1){
            res->bottom=l1;
        }else{
            res->bottom=l2;
        }
        // if(dummynode->bottom){
        //     dummynode->bottom->next=NULL;
        // }
        return dummynode->bottom;    
    }
    Node* helper(Node* root){
        Node* temp=root;
        if(temp==NULL || temp->next==NULL){
            return temp;
        }
        Node*mergehead= helper(temp->next);
        return merge(temp,mergehead);
    }
    Node *flatten(Node *root) {
        // Your code here
        return helper(root);
    }
};
