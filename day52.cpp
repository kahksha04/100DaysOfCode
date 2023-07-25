// You are given a string s. You need to reverse the string.

void reverse(string &s,int i,int j){
    if(i>j){
        return;
    }
    
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}

string reverseWord(string str){
    
  //Your code here
  reverse(str,0,str.length()-1);
  return str;
}
