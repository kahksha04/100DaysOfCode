// Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to
// length of the linked list.

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(k==0 || head==NULL || head->next==NULL){
            return head;
        }
        Node* temp=head;
        Node* prev;
        Node* curr=head;
        int c=1;
        while(curr->next!=NULL){
            c++;
            curr=curr->next;
        }
        if(c==k){
            return head;
        }
        while(k>0){
            prev=temp;
            temp=temp->next;
            k--;
        }
        
        prev->next=NULL;
        curr->next=head;
        head=temp;
        return head;
    }
};
