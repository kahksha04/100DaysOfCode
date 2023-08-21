// Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string that
// reads the same backward. More formally, S is a palindrome if reverse(S) = S. In case of conflict, return the substring which occurs first ( with the 
// least starting index).

class Solution {
  public:
    string longestPalin (string s) {
        int length=s.size();
        int start=0,end=0,maxl=1;
        for(int i=0;i<length;i++)
        {
            int l=i,r=i;
            while(l>=0 && r<length)
            {
                if(s[l]!=s[r])
                {
                    break;
                }
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl)
            {
                maxl=len;
                start=l+1;
                end=r-1;
            }
        }
        
        //even length
        for(int i=0;i<length;i++)
        {
            int l=i,r=i+1;
            while(l>=0 && r<length)
            {
                if(s[l]!=s[r])
                {
                    break;
                }
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl)
            {
                maxl=len;
                start=l+1;
                end=r-1;
            }
        }
        
        return s.substr(start,maxl);
    }
};
