// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum1=(n*(n+1))/2;
        int sum2=0;
        
        for(int i=0;i<n-1;i++){
            sum2+=array[i];
        }
        
        return sum1-sum2;
    }
};
