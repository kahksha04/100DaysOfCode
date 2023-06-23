// Given a linked list and positions m and n. Reverse the linked list from position m to n.

class Solution
{
    public:
  
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(head==NULL || head->next==NULL || m==n){
            return head;
        }
        
        
        Node* temp1=head;
        Node* temp2=head;
        vector<int> v;
        while(m>1){
            temp1=temp1->next;
            m--;
        }
        while(temp2!=NULL && n>0){
            temp2=temp2->next;
            n--;
        }
        Node *prev1=temp1;
        Node *prev2=temp2;
        while(prev1!=prev2){
            v.push_back(prev1->data);
            prev1=prev1->next;
        }
        
        reverse(v.begin(),v.end());
        int i=0;
        while(temp1!=temp2){
            temp1->data=v[i];
            i++;
            temp1=temp1->next;
        }
        return head;
    }
};
