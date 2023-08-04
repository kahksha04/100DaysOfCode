// Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two nodes

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       
       Node* lAns=lca(root->left,n1,n2);
       Node* rAns=lca(root->right,n1,n2);
       
       if(lAns!=NULL && rAns!=NULL){
           return root;
       }
       else if(lAns==NULL && rAns!=NULL){
           return rAns;
       }else if(lAns!=NULL && rAns==NULL){
           return lAns;
       }else{
           return NULL;
       }
    }
};
