class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string str=strs[0];
         int c=0;
        int m=INT_MAX,k=0,j=0;
        for(int i=1;i<strs.size();i++)
        {k=0;
         j=0;
         c=0;
            while(j<str.size() && k<strs[i].size() )
            {
               
                if(str[j]==strs[i][j]){
                   c++;
                    
                }
                else 
                    break;
                j++;
                k++;
            }
                
               m=min(m,c);    
            }
        cout<<m;
            
        
        return str.substr(0,m);
        
    }
};