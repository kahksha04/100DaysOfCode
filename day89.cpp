// Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element X in the given array.
// Note: If the element is not present in the array return {-1,-1} as pair.

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long, long> ans={-1,-1};
        for(long long i=0;i<v.size();i++){
            if(v[i]==x){
                ans.first=i;
                break;
            }
        }
        
        for(long long i=v.size()-1;i>=0;i--){
            if(v[i]==x){
                ans.second=i;
                break;
            }
        }
        return ans;
    }
};
