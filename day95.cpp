// Given an array arr[ ] of size N consisting of distinct integers, write a program that returns 1 if given array can represent preorder traversal of a possible BST, else returns 0.

class Solution {
  public:
    int canRepresentBST(int arr[], int n) {
        // code here
        int root=INT_MIN;
       stack<int> st;
       
       for(int i=0;i<n;i++){
           if(arr[i]<root) return 0;
           
           while(!st.empty() && st.top()<arr[i]){
               root=st.top();
               st.pop();
           }
           st.push(arr[i]);
       }
       return 1;
    }
};
