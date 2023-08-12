// Given a Binary Tree of size N , where each node can have positive or negative values. Convert this to a tree where value of each node will be the sum of the
// values of all the nodes in left and right sub trees of the original tree. The values of leaf nodes are changed to 0.

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve(Node *root){
        if(root==NULL){
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        int val=root->data;
        root->data=l+r;
        return val+l+r;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};
