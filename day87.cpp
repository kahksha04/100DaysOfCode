// Given a singly linked list, remove all the nodes in the list which have any node on their right whose value is greater. (Not just immidiate Right , 
// but entire List on the Right)

class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node *temp=head;
        while(temp->next!=NULL){
            if(temp->data<temp->next->data){
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
            }else{
                 temp=temp->next;
            }
        }
        return head;
    }
    
};
