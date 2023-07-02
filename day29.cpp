// Question is, given a string S consisting only of opening and closing parenthesis 'ie '('  and ')',  the task is to find out the length of the longest 
// valid parentheses substring.

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;
        st.push(-1);
        
        int maxLen = 0;
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    int len = i - st.top();
                    maxLen = max(len,maxLen);
                }
            }
        }
        return maxLen;
    
    }
};
