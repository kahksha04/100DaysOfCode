// Given a linked list of strings having n nodes check to see whether the combined string formed is palindrome or not. 

bool compute(Node* root)
{
   //Your code goes here
   if(root==NULL || root->next==NULL){
       return true;
   }
   string s="";
   while(root!=NULL){
       s+=root->data;
       root=root->next;
   }
   string s1=s;
   reverse(s1.begin(),s1.end());
   if(s==s1){
       return true;
   }else{
       return false;
   }
}
