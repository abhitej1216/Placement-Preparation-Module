class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> m;
        vector<int>v;
        int x=nums.size()/3;
        //cout<<x;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
    for(auto it:m)
        {
            if(it.second>x)
            {
               v.push_back(it.first);
            }
        }
        return v;
    }
};