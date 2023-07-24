// You are given a stack St of N integers and an element X. You have to insert X at the bottom of the given stack.

class Solution{
public:
    stack<int> insertAtBottom(stack<int> &St,int X){
        if(St.empty()){
            St.push(X);
            return St;
        }
        
        int val=St.top();
        St.pop();
        insertAtBottom(St,X);
        
        St.push(val);
        return St;
        
    }
};
