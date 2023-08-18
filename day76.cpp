// Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Geek an integer n and asked him to build a pattern.

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char c='A';
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<c;
            }
            c++;
            cout<<endl;
        }
    }
};
