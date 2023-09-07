// Given two BSTs, return elements of both BSTs in sorted form.

class Solution
{
    public:
    void inorder(Node *root, vector<int> &v){
        if(root==NULL){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    vector<int> mergeArray(vector<int>&v1, vector<int> &v2){
        vector<int> v;
        int i=0;
        int j=0;
        
        while(i<v1.size() && j<v2.size()){
            if(v1[i]>v2[j]){
                v.push_back(v2[j]);
                j++;
            }else{
                v.push_back(v1[i]);
                i++;
            }
        }
        
        while(i<v1.size()){
            v.push_back(v1[i]);
            i++;
        }
        
        while(j<v2.size()){
            v.push_back(v2[j]);
            j++;
        }
        
        return v;
    }
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int> v1;
       vector<int> v2;
       
       inorder(root1,v1);
       inorder(root2,v2);
       vector<int> ans;  
       ans=mergeArray(v1,v2);
       
       return ans;
    }
};
