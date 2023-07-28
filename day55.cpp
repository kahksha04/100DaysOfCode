// Given a set of positive integers, find all its subsets.

class Solution
{
    public:
    
    void solve(vector<int> &A,vector<vector<int>>&ans,vector<int> output,int i){
        if(i==A.size()){
            ans.push_back(output);
            return;
        }
        
        solve(A,ans,output,i+1); 
        
        int val=A[i];
        output.push_back(val);
        solve(A,ans,output,i+1);
    
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>> ans;
        vector<int> output={};
        int i=0;
        solve(A,ans,output,i);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
