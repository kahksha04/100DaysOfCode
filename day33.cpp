// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
 {
     deque<long long >dq;
     for(long long  i=0; i<K; i++)
     {
         if(A[i]<0)
         {
             dq.push_back(i);
         }
     }
     vector<long long>ans;
     for(long long i=K; i<N; i++)
     {
         if(dq.empty()==true)
         {
             ans.push_back(0);
         }
         else
         {
             ans.push_back(A[dq.front()]);
         }
         
         while(!dq.empty() and dq.front()<=i-K)
         {
             dq.pop_front();
         }
         if(A[i]<0)
         {
             dq.push_back(i);
         }
     }
     if(dq.empty()==true)
     {
         ans.push_back(0);
         
     }
     else
     {
          ans.push_back(A[dq.front()]);
     }
    
     
     return ans;
                                                 
 }
