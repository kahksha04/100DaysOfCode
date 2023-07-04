// Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        list<int> li;
    vector<int> maxx;
    
    for (int i = 0, j = 0; j < n; ++j) {
        while (!li.empty() and li.back() < arr[j]) {
            li.pop_back();
        }
        li.push_back(arr[j]);
        
        if (j - i + 1 < k) continue;
        
        maxx.push_back(li.front());
        
        if (li.front() == arr[i]) li.pop_front();
        i++;
    }
    return maxx;
    }
};
