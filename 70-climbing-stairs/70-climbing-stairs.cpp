class Solution {
public:
    int dp(int ind,vector<int> &v)
    {
        if(ind==0)
            return 1;
        if(ind==1)
            return 1;
        if(v[ind]!=-1) return v[ind];
       int l= dp(ind-1,v);
            int r=dp(ind-2,v);
        return v[ind]=l+r;
        
    
    }
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
        return dp(n,v);

        
    }
};