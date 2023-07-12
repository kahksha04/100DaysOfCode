// You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.

class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
          long  ans=((long)n*(long)(n+1));
        ans/=2;
        return ans%1000000007;
    }
};
