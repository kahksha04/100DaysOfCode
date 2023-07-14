// Given an array arr[] of N integers, calculate the median

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size();
		    int m=n/2;
		    if(n%2==0){
		        return ((v[m]+v[m-1])/2); 
		    }
		    return v[m];
		}
};
