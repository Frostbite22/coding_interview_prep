class Solution {
public:
    int longestPalindrome(string s) {
        
        if (s.length() == 1) return 1 ; 
        unordered_map<char,int> is_pair ; 
        for(int i=0 ; i<s.length(); i++)
        {
            is_pair[s[i]] += 1 ;
        }
        int cpt = 0 ;
        int odd = false ; 
        for(auto it=is_pair.begin(); it != is_pair.end(); it++)
        {
            if(it->second % 2 == 0) cpt += it->second ;
            else 
            {
                cpt += it->second - 1 ; 
                odd = true ;         
            } 
        }
        
        return odd ? cpt+1 : cpt ;
    }
};
