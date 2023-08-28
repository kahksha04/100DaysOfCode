// Given a number N, calculate the prime numbers up to N using Sieve of Eratosthenes.  

class Solution
{
public:

    bool prime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> ans;
        for(int i=2;i<=N;i++){
            if(prime(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
