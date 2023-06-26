//  Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
//Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1. 

class Solution{
   public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
          vector<long long>ans;
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[i]>=st.top())st.pop();
            if(st.empty())ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
