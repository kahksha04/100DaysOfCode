// You are given a queue Q of N integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.

 class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        int c=0;
        
        for(int i=0;i<q.size();i++){
            c++;
        }
        int n=c/2;
        queue<int> qe;
        for(int i=0;i<n;i++){
            qe.push(q.front());
            q.pop();
        }
        int j=0;
        while(!q.empty() || !qe.empty()){
            if(j%2!=0){
                ans.push_back(q.front());
                q.pop();
                j++;
            }else{
               ans.push_back(qe.front());
                qe.pop();
                j++;
            }
        }
        return ans;
    }
};
