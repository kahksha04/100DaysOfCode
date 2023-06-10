// Given a linked list and a number k. You have to reverse first part of linked list with k nodes and the second part with n-k nodes.

class Solution
{
public:
    
    Node *reverse(Node *head, int k)
    {
        // code here
        if(head->next==NULL && k==0){
            return head;
        }
        Node* temp=head;
        Node* prev=NULL;
        Node* first=head;
        Node* curr=head;
        Node* last=NULL;
        int c=0;
        while(temp!=NULL){
            c++;
            if(c==k){
                head=curr;
                last=curr->next;
            }
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            
        }
        last->next=NULL;
        first->next=prev;
        return head;
    }
};
