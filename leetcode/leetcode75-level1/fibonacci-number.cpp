class Solution {
public:
    int calculate(int n,unordered_map<int,int>& memo)
    {
        if(memo[n]) return memo[n] ; 
        if (n == 0) return 0 ; 
        if (n==1) return 1 ; 
        memo[n] = calculate(n-1,memo)+ calculate(n-2,memo) ; 
        return memo[n] ; 
    }
    int fib(int n) {
        unordered_map<int,int> memo ; 
        return calculate(n,memo);
    }
};
