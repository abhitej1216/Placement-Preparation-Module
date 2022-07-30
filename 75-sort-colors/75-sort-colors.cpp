class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
               a++;
           else if(nums[i]==1)
           b++;
           else
               c++;
       }
   fill_n(nums.begin(), a, 0);
        fill_n(nums.begin()+a, b, 1);
        fill_n(nums.begin()+a+b, c, 2);
           
       }
    
};