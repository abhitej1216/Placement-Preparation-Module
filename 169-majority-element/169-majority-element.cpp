class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int r=nums[0],c=1;
       int n=nums.size();
        for(int i = 1; i < nums.size(); i++)
        {
            if(r==nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c==0){
            
                r=nums[i];
                c=1;
            
                 }
                
                     
       
    

    }
                return r;
    }
};