class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int j=0;
        int n=nums.size();
        int x=n;
        for(int i=0;i<n;i++)
        {
              x=x^j;
            x=x^nums[i];
            j++;
          
        }
        //  for(int i=0;i<=n;i++)
        // {
        //     x=x^i;
        // }
        return x;
        
        
    }
};