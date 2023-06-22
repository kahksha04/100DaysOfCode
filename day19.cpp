// Given a link list of size N, modify the list such that all the even numbers appear before all the odd numbers in the modified list. 
//The order of appearance of numbers within each segregation should be same as that in the original list.

Node* divide(int N, Node *head){
        // code here
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node *temp=head;
        Node *odd=new Node(-1);
        Node *o=odd;
        Node *even=new Node(0);
        Node *e=even;
        while(temp!=NULL){
            if(temp->data%2==0){
                even->next=temp;
                even=temp;
                temp=temp->next;
            }else{
               odd->next=temp;
                odd=temp;
                 temp=temp->next;
            }
        }
        odd->next=NULL;
       
        even->next=o->next;
        
        odd=o->next;
        even=e->next;
        
        free(e);
        free(o);
        
        return even;
    }
