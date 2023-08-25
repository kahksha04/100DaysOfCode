// Given a string S, check if it is palindrome or not.

class Solution{
public:		
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0;
	    int j=S.length()-1;
	    
	    while(i<=j){
	        if(S[i]!=S[j]){
	            return 0;
	        }
	        
	        i++;
	        j--;
	    }
	    
	    return 1;
  }

};
