// Given an array of integers. Find the Inversion Count in the array. 

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
   long long int merge(long long arr[], long long l, long long m, long long r)
    {
        long long int count=0;
        long long int left=l;
        long long int right=m+1;
        vector<long long int>v;
        while(left<=m && right<=r)
        {
            if(arr[left]<=arr[right])
            {
                v.push_back(arr[left]);
                left++;
            }
            
            else{
                v.push_back(arr[right]);
                 count+=(m-left+1);
                right++;
            }
        }
        
        while(left<=m)
        {
            v.push_back(arr[left]);
            left++;
        }
        
        while(right<=r)
        {
            v.push_back(arr[right]);
            right++;
        }
        
        for(int i=l;i<=r;i++)
        {
            arr[i] = v[i-l];
        }
        
        return count;
    }
    long long int mergeSort(long long a[],long long l ,long long r){
        long long int c=0;
        if(l>=r){
            return c;
        }
        
        long long mid=(l+r)/2;
        c+=mergeSort(a,l,mid);
        c+=mergeSort(a,mid+1,r);
        c+=merge(a,l,mid,r);
        return c;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0,N-1);
    }

};
