//Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

bool detectLoop(Node* head)
    {
        // your code here
        
        Node* temp=head;
        while (temp!=NULL)
        {
            if (temp->data==0)
            {
                return true;
            }
            temp->data=0;
            temp=temp->next;
        }
        return false;
    }
