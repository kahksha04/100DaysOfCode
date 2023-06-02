/*Given a singly linked list and a number k, you are required to complete the function modularNode() which returns the modular node of the linked list.
A modular node is the last node of the linked list whose Index is divisible by the number k, i.e. i%k==0.
Note: If no such node is available, return -1. We are following 1 indexing.*/


int modularNode(Node* head, int k)
{
	// Code here
	if(head == NULL){
            return -1;
    }
    
	int index = 1;
        int ans = 0;
        Node *curr = head;
        while(curr != NULL){
            if(index % k ==0){
                ans = curr->data;
            }
          curr = curr->next;  
          index++;  
        }
        if(ans == 0){
            return -1;
        }
        return ans;
}
