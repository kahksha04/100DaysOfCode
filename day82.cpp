// Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int i=0;
        int j=n-1;
        
        while(i<=j){
            if(arr[i]==x && arr[j]==x){
                return {i,j};
            }
            else if(arr[i]==x && arr[j]!=x){
                j--;
            }
            else if(arr[i]!=x && arr[j]==x){
                i++;
            }else{
                i++;
                j--;
            }
        }
        
        return {-1};
    }
};
