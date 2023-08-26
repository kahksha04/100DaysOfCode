// Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
         
        int n = s.size();
        int ans=-1;
        int i=0;
        int j=0;
        unordered_map<char,int> m;
        
        while(j<n)
        {
            m[s[j]]++;
            if(m.size()==k)
            {
                ans = max(ans,j-i+1);
            }
            else if(m.size()>k)
            {
                while(m.size()>k && i<j)
                {
                    if(m[s[i]]>1) m[s[i]]--;
                    else m.erase(s[i]);
                    i++;
                }
                ans = max(ans,j-i+1);
            }
            j++;
        }
        
        if(m.size()==k)
        {
            ans = max(ans,j-i);
        }
        
        return ans;
    }
};
