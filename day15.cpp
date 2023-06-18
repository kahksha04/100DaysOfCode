// A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

class Solution
{
    public:
    Node* fun(Node *head){
       if(head->next == NULL){
           head->data += 1;
           return head;
       } 
       Node *temp=fun(head->next);
       if(temp->data>9){
           head->data +=1;
           temp->data=0;
       }
       return head;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        head=fun(head);
        if(head->data>9){
           Node *temp= new Node(1);
           head->data =0;
           temp->next=head;
           head=temp;
       }
        return head;
    }
