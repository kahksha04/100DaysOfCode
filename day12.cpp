// Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.

Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    
    if(head1 == NULL){
        return head2;
    }else if(head2 == NULL){
        return head1;
    }
    Node* temp;
    if(head1 -> data < head2 -> data){
        head1->next = sortedMerge(head2,head1->next);
        return head1;
    }else{
        head2->next = sortedMerge(head2->next,head1);
        return head2;
    }
}  
