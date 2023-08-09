// Given a binary tree, print the bottom view from left to right.
// A node is included in bottom view if it can be seen when we look at the tree from bottom.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            Node *frontNode=temp.first;
            int dis=temp.second;
            m[dis]=frontNode->data;
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left,dis-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right,dis+1));
            }
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
