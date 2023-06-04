/*Check If Circular Linked List

Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all
nodes are connected in the form of a cycle. An empty linked list is considered as circular.*/

bool isCircular(Node *head)
{
   // Your code here
   Node *temp=head;
   do{
       temp=temp->next;
       if(temp==NULL){
           return false;
       }else if(temp==head){
           return true;
       }
   }while(temp!=head);
}
