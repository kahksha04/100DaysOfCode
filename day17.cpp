// Given two linked lists, the task is to complete the function findIntersection(), that returns the intersection of two linked lists. 
// Each of the two linked list contains distinct node values.

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        Node* dummy=new Node(-1);
        Node* ans=dummy;
        unordered_map<int,bool> m;
        while(head2!=NULL){
            m[head2->data]=true;
            head2=head2->next;
        }
        
        while(head1!=NULL){
            if(m[head1->data]==true){
                dummy->next=head1;
                dummy=dummy->next;
            }
            head1=head1->next;
        }
        dummy->next=NULL;
        return ans->next;
    }
};
