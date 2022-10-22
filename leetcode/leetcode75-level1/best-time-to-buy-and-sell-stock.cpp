class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    int max_profit = 0 ;
    int best_buy = INT_MAX ; 
    int profit = 0 ;
    
    for(int i=0 ; i< prices.size(); i++)
    {
        if(prices[i] < best_buy) best_buy = prices[i] ; 
        profit = prices[i] - best_buy ; 
        if(profit > max_profit) max_profit = profit ;    
    }
    
    return max_profit ; 
    }
    
};
