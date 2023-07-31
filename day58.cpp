// Given a binary tree, find if it is height balanced or not. 
// A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int height(struct Node* node){
        // code here 
        
        if(node==NULL){
            return 0;
        }
        
        int h1=height(node->left);
        int h2=height(node->right);
        
        return max(h1,h2)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL){
            return true;
        }
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        //bool diff = abs(height(root->left)-height(root->right))<=1;
        if(left && right && abs(height(root->left)-height(root->right))<=1){
            return true;
        }
        return false;
    }
};
