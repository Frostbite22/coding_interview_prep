class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0 ; 
        int j = 0 ;
        while(i < s.length() && j < t.length())
        {
            
            if(t[j] == s[i])
            {
                s.erase(i,1);
                j++ ;
            }
            else
            {
                j++ ; 
            }    
        }
        return s =="" ? true : false ;
    }
};
