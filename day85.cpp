// You are given a string s. You need to reverse the string.

class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int i=0;
        int j=str.length()-1;
        
        while(i<=j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
        
        return str;
    }
};
