// Given a Binary Tree of size N , where each node can have positive or negative values. Convert this to a tree where each node contains the sum of the left and 
// right sub trees of the original tree. The values of leaf nodes are changed to 0.

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve (Node *node){
        if(node==NULL){
            return 0;
        }
        
        int l=solve(node->left);
        int r=solve(node->right);
        
        int ans=l+r+node->data;
        node->data=l+r;
        return ans;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};
