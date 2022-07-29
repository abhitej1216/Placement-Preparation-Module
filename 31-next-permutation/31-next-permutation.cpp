class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool t=false;
        int m;
    for(int i=nums.size()-1;i>0;i--)
    {
        if(nums[i]>nums[i-1])
        {    m=i-1;
         t=true;
         break;
        }
        
    }
       
        if(t){
         for(int i=nums.size()-1;i>=0;i--)
         {
             if(nums[m]<nums[i])
             {
                 swap(nums[m],nums[i]);
                 break;
             }
         }
             reverse(nums.begin() + m + 1, nums.end());
        }
        else
        {
             reverse(nums.begin(), nums.end());
        }
             
             
         
        
    
  
    }
};