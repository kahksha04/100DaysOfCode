/*Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.*/


class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
         long long sum=0;
       int start=0,end=0,flag=0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           while(sum>s && start<i){
               sum-=arr[start];
               start++;
           }
           if(sum==s){
               end=i;
               flag=1;
               break;
           }
       }
       if(start>end || flag==0)return {-1};
       return {start+1,end+1};
   }
        
};
