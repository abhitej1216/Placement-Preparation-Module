class Solution {
public:
    int fun(int ind , vector<int> &nums ,vector<int> &dp)
    {
        if(ind==0)
            return nums[ind];
        if(ind<0)
        return 0;
        if(dp[ind]!=-1)
            return dp[ind];
       int l= fun(ind-2,nums,dp)+nums[ind];
       
        int r=fun(ind-1,nums,dp)+0;
        return dp[ind]= max(l,r);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
       return fun(nums.size()-1,nums,dp);
    }
};