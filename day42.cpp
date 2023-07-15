// Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number N, the task is to check if it is a Strong Number 
// or not. Print 1 if the Number is Strong, else Print 0.

class Solution {
  public:
  
    int fact(int num)
  {
      int m=1;
      while(num>0)
      {
          m*=num;
          num--;
      }
      return m;
  }
    int isStrong(int N) {
        // code here
        int ans=0;
        int s=N;
        while(s>0)
        {
            int num=s%10;
            ans+=fact(num);
            s=s/10;
        }
        if(ans==N)
        {
            return 1;
        }
        return 0;
        
    }
};
