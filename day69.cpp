// Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(), that find the sum of all nodes on the longest path from root
// to leaf node. If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered.

class Solution
{
public:
    
    void solve(Node *root,int sum,int &mxsum,int &mxln,int mx){
        if(root==NULL){
            if(mx>mxln){
                mxln=mx;
                mxsum=sum;
            }
            else if(mx==mxln){
                mxsum=max(sum,mxsum);
            }
            return;
        }
        
        sum=sum+root->data;
        solve(root->left,sum,mxsum,mxln,mx+1);
        solve(root->right,sum,mxsum,mxln,mx+1);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int mx=0;
        int mxln=0;
        
        int sum=0;
        int mxsum=INT_MIN;
        solve(root,sum,mxsum,mxln,mx);
        
        return mxsum;
    }
};
