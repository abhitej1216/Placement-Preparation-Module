class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=0,msum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
           
                 csum=csum+nums[i];
              msum=max(csum,msum);
          
             if(csum<0)
            csum=0;
           
                
            }
        
        
       return msum; 
    }
};