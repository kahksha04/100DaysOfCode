// You are given two arrays A and B of unique elements of size N. Check if array B is a stack permutation of the array A or not.
  //Stack permutation means that array B can be created from array A using a stack and stack operations.

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        int j=0;
        stack<int>st;
        for(int i=0; i<N; i++){
            st.push(A[i]);
            while(!st.empty() && B[j]==st.top()){
                st.pop();
                j++;
            }
        }
        if(!st.empty()) return 0;
        return 1;

}
};
