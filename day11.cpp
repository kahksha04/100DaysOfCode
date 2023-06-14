// Given a linked list of N nodes such that it may contain a loop.

// A loop here means that the last node of the link list is connected to the node at position X(1-based index). If the link list does not have any loop, X=0.

// Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.


class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head==NULL){
            return;
        }
        Node* slow=head;
        Node* fast=head;
        
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }else if(fast==NULL ||fast->next==NULL){
                return;
            }
        }
        if(slow==head){
            Node* temp=slow;
            while(temp->next!=slow){
                temp=temp->next;
            }
            temp->next=NULL;
            return;
        }
        fast=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;
    }
};
