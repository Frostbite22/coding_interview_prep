class Solution {
public:
    int memo[101][101]{} ; 
    int memoized(int m,int n)
    {   
        if(m==0 || n==0) return 0 ; 
        if(m==1 && n==1) return 1; 
        if(memo[m][n]) return memo[m][n] ;
        return memo[m][n] = uniquePaths(m,n-1) + uniquePaths(m-1,n) ;
        
    }
    int uniquePaths(int m, int n) {

        return memoized(m,n) ;
    }
};
