class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n1=matrix.size();
        int n2=matrix[0].size();
        vector<int>v1(n1,-1);
          vector<int>v2(n2,-1);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                  v1[i]=0;
                    v2[j]=0;
                    }
                    
            }
        }
        
                    
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
               if( v1[i]==0 || v2[j]==0) 
                    matrix[i][j]=0;
                        
                    
                }
            }
        }
    
};