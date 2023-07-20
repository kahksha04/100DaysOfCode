// The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each 
// with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path 
// longer than nine nodes). 

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node* root){
        if(root==NULL){
            return 0;
        }
        
        int l=height(root->left);
        int r=height(root->right);
        
        return max(l,r)+1;
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        
        int n1=diameter(root->left);
        int n2=diameter(root->right);
        int n3=height(root->left)+1+height(root->right);
        
        int ans= max(n1,max(n2,n3));
    }
};
