// Given a positive integer N., The task is to find the value of    \sum_{i=1}^{i=n} F(i)  where function F(i) for the number i be defined as the sum of
// all divisors of ‘i‘.

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
       long long ans=0;
       for(int i=1;i<=N;i++){
           ans+=i*(N/i);
       }
       return ans;
    }
};
