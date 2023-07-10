// Count the numbers between 1 to N containing 4 as a digit.

class Solution {
  public:
    int countNumberswith4(int N) {
        // code here
        int c=0;
        for(int i=1;i<=N;i++){
            int m=i;
            while(m){
                if(m%10==4){
                    c++;
                    break;
                }
                m=m/10;
            }
        }
        return c;
    }
};
