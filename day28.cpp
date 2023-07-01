// Given a String. Reverse each word in it where the words are separated by dots.


class Solution{
public:
    string reverseWords (string s)
    {
        //code here.
        string ans="";
        
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                st.push(s[i]);
            }
            if(s[i]=='.'){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                ans+=".";
            }
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
