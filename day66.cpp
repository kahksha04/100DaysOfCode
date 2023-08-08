// Given a binary tree. Find the inorder traversal of the tree without using recursion.

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> ans;
        stack<Node*> s;
        Node *temp=root;
        while(!s.empty() || temp){
            while(temp){
                s.push(temp);
                temp=temp->left;
            }
            ans.push_back(s.top()->data);
            temp=s.top()->right;
            s.pop();
        }
        return ans;
    }
};
