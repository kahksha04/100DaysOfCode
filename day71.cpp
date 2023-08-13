// Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. 
// It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.

class Solution {
  public:
    Node* mapping(Node* root, int &target, map<Node*,Node*> &m){
        Node* res=NULL;
        queue<Node*> q;
        q.push(root);
        m[root]==NULL;
        
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            
            if(temp->data==target){
                res=temp;
            }
            
            if(temp->left){
                m[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right){
                m[temp->right]=temp;
                q.push(temp->right);
            }
        }
        
        return res;
    }
    
    int burning(Node* root, map<Node*,Node*> &m){
        map<Node*,bool> visited;
        queue<Node*> q;
        q.push(root);
        visited[root]=true;
        int time=0;
        
        while(!q.empty()){
            bool flag=0;
            int n=q.size();
            while(n--){
                Node* temp=q.front();
                q.pop();
                
                if(temp->left && !visited[temp->left]){
                    q.push(temp->left);
                    visited[temp->left]=true;
                    flag=1;
                }
                
                if(temp->right && !visited[temp->right]){
                    q.push(temp->right);
                    visited[temp->right]=true;
                    flag=1;
                }
                
                if(m[temp] && !visited[m[temp]]){
                    q.push(m[temp]);
                    visited[m[temp]]=true;
                    flag=1;
                }
            }
            
            if(flag==1){
                time++;
            }
        }
        
        return time;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*> m;
        Node* temp=mapping(root,target,m);
        int ans=burning(temp,m);
        
        return ans;
    }
};
