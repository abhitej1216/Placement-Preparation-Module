class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
        map<int , int >m;
        
        int x;
        for(int i=0;i<n;i++)
        {
      m[nums[i]]++;
        }
          for(auto i : m)
        {
            if(i.second > 1)
            {
               x = i.first;
                break;
            }
          }
        return x;
    }
};