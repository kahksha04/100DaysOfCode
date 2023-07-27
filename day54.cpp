// Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ], the task is to list all words which are possible by pressing 
// these numbers.

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    void sol(int a[],int n,string output,int i,vector<string> &ans,string mapping[]){
        if(i==n){
            ans.push_back(output);
            return;
        }
        
        int num=a[i];
        string val=mapping[num];
        
        for(int j=0;j<val.length();j++){
            output.push_back(val[j]);
            sol(a,n,output,i+1,ans,mapping);
            output.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        if(N==0){
            return {};
        }
        
        vector<string> ans;
        string output="";
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int i=0;
        
        sol(a,N,output,i,ans,mapping);
        return ans;
    }
};
