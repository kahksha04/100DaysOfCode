// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all
// the elements to its right side. The rightmost element is always a leader. 

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);
        int mx=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>=mx){
                mx=a[i];
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
