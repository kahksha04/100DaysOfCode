// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
//A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. 
//Here M[i][i] will always be 0.

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            if(M[a][b]==1){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        
        int celebrity=s.top();
        bool rowCheck=false;
        int c1=0;
        for(int i=0;i<n;i++){
            if(M[celebrity][i]==0){
                c1++;
            }
        }
        if(c1==n){
            rowCheck=true;
        }
        bool colCheck=false;
        int c2=0;
        for(int i=0;i<n;i++){
            if(M[i][celebrity]==1){
                c2++;
            }
        }
        if(c2==n-1){
            colCheck=true;
        }
        
        if(rowCheck==true && colCheck==true){
            return celebrity;
        }else{
            return -1;
        }
    }
};
