class Solution {
public:
    int minCost(int n,vector<int>& cost,unordered_map<int,int>& memo)
    {
        if (n < 0) return 0 ;
        if (n==0 || n==1) return cost[n];
        if (memo[n]) return memo[n];
        return memo[n] = cost[n] + min(minCost(n-1,cost,memo), minCost(n-2,cost,memo));

    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> memo ; 
        cost.push_back(0); 
        return minCost(cost.size()-1,cost,memo);
    }
};
