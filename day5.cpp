//Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

#include<vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<Node*> v;
        Node *temp=head;
        while(temp!=NULL){
            v.push_back(temp);
            temp=temp->next;
        }
        int i=0;
        int j=v.size()-1;
        while(i<j){
            if(v[i]->data!=v[j]->data){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
