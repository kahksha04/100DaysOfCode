// Given a binary tree. Find the preorder traversal of the tree without using recursion.

class Solution{
    public:
    
    
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        stack<Node*> s;
        
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            ans.push_back(root->data);
            if(root->right){
                s.push(root->right);
            }
            if(root->left){
                s.push(root->left);
            }
        }
        
        return ans;
    }
};
