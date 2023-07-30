// Given a positive integer n, generate all possible unique ways to represent n as sum of positive integers.

class Solution{
	public:
	
	void solve(vector<vector<int>> &ans,vector<int> &output,int n,int i){
	    if(n==0){
	        ans.push_back(output);
	        return;
	    }
	    
	    if(n<0){
	        return;
	    }
	    for(int j=i;j>=1;j--){
	        output.push_back(j);
	        solve(ans,output,n-j,j);
	        output.pop_back();
	    }
	}
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<vector<int>> ans;
        vector<int> output;
        
        solve(ans,output,n,n);
       
        return ans;
    }
};
