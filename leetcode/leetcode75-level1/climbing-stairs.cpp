class Solution {
public:
    int memoized(int n,unordered_map<int,int>& memo)
    {
        if (n==1) return 1 ; 
        if (n==2) return 2 ;
        if (memo[n]) return memo[n]; 
        return memo[n] = memoized(n-1,memo) + memoized(n-2,memo);
    }
    
    int climbStairs(int n) {
        unordered_map<int,int> memo ; 
        return memoized(n,memo) ;
    }
};
