class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
       unordered_set < int > s;
  for (int num: nums) {
    s.insert(num);
  }
        int c=1;
        int ans=1;
        for (int num: nums) {
          
            if(s.find(num-1)==s.end())
            {  
                c=1;

   
           while(s.find(num+1)!=s.end())
           { c++;
                num++;
           }
            ans=max(c,ans);
                }
        }
        
        return ans;
        
        
    }
};