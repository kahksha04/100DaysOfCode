//Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      
      if(head_ref==NULL || x<0){
          return head_ref;
      }
      Node *temp=head_ref;
      while(x>1){
          temp=temp->next;
          x--;
      }
      if(temp==head_ref){
          return head_ref->next;
      }
      temp->prev->next=temp->next;
      if(temp->next!=NULL){
          temp->next->prev=temp->prev;
      }
      return head_ref;
      
    }
};
