// Given a binary tree and a budget. Assume you are at the root of the tree(level 1), you need to maximise the count of leaf nodes you can visit in your budget if the cost of visiting a leaf node is equal to the 
// level of that leaf node.

class Solution
{
public:
    int getCount(Node *root, int k)
    {
        //code here
        queue<Node*> q;
        q.push(root);
        
        int c=0;
        int cost=0;
        int level=1;
        
        while(!q.empty()){
            int n=q.size();
            
            while(n--){
                Node* temp=q.front();
                q.pop();
                
                if(temp->left==NULL && temp->right==NULL){
                    cost+=level;
                    c++;
                    
                    if(cost>k) return c-1;
                    if(cost==k) return c;
                }
                
                if(temp->left) q.push(temp->left);
                
                if(temp->right) q.push(temp->right);
            }
            level++;
        }
        
        return c;
    }
};
