// Given a sorted array. Convert it into a Height balanced Binary Search Tree (BST). Find the preorder traversal of height balanced BST. If there exist many such 
// balanced BST consider the tree whose preorder is lexicographically smallest.

class Solution {
public:
    
    void solve(vector<int> &nums,vector<int>&ans,int s,int e){
        if(s>e){
            return;
        }
        
        int mid=(s+e)/2;
        ans.push_back(nums[mid]);
        
        solve(nums,ans,s,mid-1);
        solve(nums,ans,mid+1,e);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        int n=nums.size()-1;
        solve(nums,ans,0,n);
        return ans;
    }
};
