// Given an array arr[] containing positive elements. A and B are two numbers defining a range. The task is to check if the array contains all elements in the 
// given range.

class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		sort(arr,arr+n);
		int c=0;
		int m=A;
		for(int i=0;i<n;i++){
		    if(arr[i]==A && A<=B){
		        c++;
		        A++;
		    }
		}
		
		if(c==(B-(m-1))){
		    return true;
		}
		return false;
	}
};
