//  Professor X wants his students to help each other in the chemistry lab. He suggests that every student should help out a classmate who scored less marks than him in 
//  chemistry and whose roll number appears after him. 
//  But the students are lazy and they don't want to search too far. They each pick the first roll number after them that fits the criteria. 
//  Find the marks of the classmate that each student picks.


class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> v(n);
        stack<int> s;
        s.push(-1);
        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && s.top()>=arr[i]){
                s.pop();
            }
            v[i]=s.top();
            s.push(arr[i]);
        }
        return v;
    } 
};
