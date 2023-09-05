// Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum. 

class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    
    void inorder(struct Node *root,vector<int>&v){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    
    vector<int> v;
    inorder(root,v);
    int i=0;
    int j=v.size()-1;
    
    while(i<j){
        if(v[i]+v[j]==target){
            return 1;
        }
        else if(v[i]+v[j]>target){
            j--;
        }else{
            i++;
        }
    }
    
    return 0;
    
    }
};

