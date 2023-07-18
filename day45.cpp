// Given a binary tree, find its preorder traversal.

void preordertraversal(Node*root,vector<int>&ans){
    if(root==NULL) return ;
    ans.push_back(root->data);
    preordertraversal(root->left,ans);
    preordertraversal(root->right,ans);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>ans;
   preordertraversal(root,ans);
   return ans;
}
