
void fun(SinglyLinkedListNode* llist, int &positionFromTail,int &ans){
    SinglyLinkedListNode* temp=llist;
    if(temp==0) return;
    fun(temp->next,positionFromTail,ans);
    if(positionFromTail==0){
        ans=temp->data;
    }
    positionFromTail--;
}
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
int ans=-1;
fun(llist,positionFromTail,ans);
return ans;
}
