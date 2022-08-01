class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
          if(n==0){
            return;
        }
        if(m==0){
            for(int b=0;b<n;b++){
                nums1[b]=nums2[b];
                
            }
            return;
        }
        if(n!=0 && m!=0)
        {
        while(i<m)
        {
           if(nums1[i]>=nums2[0])
           {
               swap(nums1[i],nums2[0]);
                   i++;
               sort(nums2.begin(),nums2.end());
           }else
            i++;
            
        }
        for(int j=0;j<n;j++)
        {
            nums1[i+j]=nums2[j];
        }
        }
        
    }
};