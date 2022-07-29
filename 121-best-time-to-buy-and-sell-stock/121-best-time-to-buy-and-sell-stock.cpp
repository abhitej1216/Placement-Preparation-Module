class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int m=INT_MAX;
        for(auto i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            max_profit=max(prices[i]-m,max_profit);
        }
    
            
        return max_profit;
    }
};