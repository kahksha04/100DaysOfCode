// Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head->next==NULL){return head;}
     unordered_map<int,bool>umap;

     Node*x = head;
     
     umap[head->data] = true;
     while(x!=NULL && x->next!=NULL){
         if(umap[x->next->data]==false){
            umap[x->next->data]=true;
            x = x->next;
         }
         else{
            x->next = x->next->next;
         }
     }
     return head;
    }
};

