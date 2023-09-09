// Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
// Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

class Solution {
  public:
  
    int totalNodes(struct Node* root){
        if(root==NULL){
            return 0;
        }
        
        return 1+ totalNodes(root->left) + totalNodes(root->right);
    }
    
    bool isCBT(struct Node* root, int i, int c){
        if(root==NULL){
            return true;
        }
        
        if(i>=c){
            return false;
        }
        
        bool left=isCBT(root->left,(2*i)+1,c);
        bool right=isCBT(root->right,(2*i)+2,c);
        
        return left && right;
    }
    
    bool isMaxHeap(struct Node* root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        if(root->right==NULL){
            return (root->data>root->left->data);
        }
        else{
            bool left=isMaxHeap(root->left);
            bool right=isMaxHeap(root->right);
            
            return (left && right && root->data>root->left->data && root->data>root->right->data);
        }
    }
    bool isHeap(struct Node* tree) {
        // code here
        int count=totalNodes(tree);
        
        if(isCBT(tree,0,count) && isMaxHeap(tree)){
            return true;
        }
        return false;
    }
};
