// There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways,
// the person can reach the top 

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        
        return countWays(n-1)+countWays(n-2);
    }
};
