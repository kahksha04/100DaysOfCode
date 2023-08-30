// Given a singly linked list and an integer x.Delete xth node from the singly linked list.

Node* deleteNode(Node *head,int x)
{
    //Your code here
    
    if(head==NULL){
        return head;
    }
    if(x==1){
        Node *temp=head;
        head=temp->next;
        free(temp);
        return head;
    }
    Node *temp=head;
    Node *prev;
    while(x>1){
        prev=temp;
        temp=temp->next;
        x--;
    }
    prev->next=temp->next;
    temp->next=NULL;
    free(temp);
    return head;
}
