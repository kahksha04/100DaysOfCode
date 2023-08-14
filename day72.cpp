// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. 
// Find the other two numbers. Return in increasing order.

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        sort(nums.begin(),nums.end());
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                ++i;
            }else{
                 ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};
