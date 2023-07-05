// There are N bags with diamonds in them. The i'th of these bags contains A[i] diamonds. If you drop a bag with A[i] diamonds, it changes to A[i]/2 diamonds and 
// you gain A[i] diamonds. Dropping a bag takes 1 minute. Find the maximum number of diamonds that you can take if you are given K minutes.

class Solution {
  public:
    int maxDiamonds(int arr[], int n, int k) {
        // code here
        int ans=0;
       priority_queue<int> pq;
       for(int i=0;i<n;i++){
           pq.push(arr[i]);
       }
       for(int i=0;i<k;i++){
           ans+=pq.top();
           int x=pq.top();
           pq.pop();
           pq.push(x/2);
       }
       return ans;
   }
    
};
