class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(auto i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
            swap(nums[i],nums[c]);
            c++;
        }
        }
        
    }
};