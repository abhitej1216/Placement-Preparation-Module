class Solution {
public:
    bool isPalindrome(int x) {
        long int y=x,s=0;
        while(y>0)
        {
            int d=y%10;
            s=s*10+d;
            y/=10;
             
        }
          if(x==s)
                return true;
           
            
            else
                
                return false;
        
    }
};