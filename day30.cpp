// N people from 1 to N are standing in the queue at a movie ticket counter. It is a weird counter, as it distributes tickets to the first K people and then the 
//last K people and again first K people and so on, once a person gets a ticket moves out of the queue. The task is to find the last person to get the ticket.

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        deque<int> q;
        for(int i=1;i<=N;i++){
            q.push_back(i);
        }
        
        int ans;
        
        while(!q.empty()){
             for(int i=0;i<k and !q.empty();i++) {
                 ans=q.front(); 
                 q.pop_front();
                 
             }
            for(int i=0;i<k and !q.empty();i++){
                ans=q.back(); 
                q.pop_back();
                
            }
        }
        return ans;
    }
};
