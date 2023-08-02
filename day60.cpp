// Given a binary tree and an integer S, check whether there is root to leaf path with its sum as S.

class Solution
{
    public:
    
    bool isSum(Node *root,int S,int n){
        if(root==NULL){
            return false;
        }
        
        n+=root->data;
        if(root->left==NULL && root->right==NULL){
            if(n==S)
               return true;
        }
        return (isSum(root->left,S,n)) || (isSum(root->right,S,n));
    }
    bool hasPathSum(Node *root, int S) {
    // Your code here
    return isSum(root,S,0);
   }
};
