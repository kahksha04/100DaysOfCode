// Given and integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.

class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
        long long ans= (N*(N+1)/2)*(N*(N+1)/2);
        return ans;
    }
};
