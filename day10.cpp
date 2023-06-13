// Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        
        // Complete this method
        if(head==NULL){
            return NULL;
        }
        node *temp=head;
        node *prev=NULL;
        node *curr=NULL;
        int c=0;
        while(temp!=NULL && c<k){
            curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
            c++;
        }
        if(curr!=NULL){
            head->next=reverse(curr,k);
        }
        return prev;
    }
};
