// Given an array of N positive integers, find GCD of all the array elements.

class Solution
{
	public:
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	if(N==1)
        return arr[0];
        for(int i=0;i<N-1;i++)
        arr[i+1]=__gcd(arr[i],arr[i+1]);
        return arr[N-1];
        
    }
};
