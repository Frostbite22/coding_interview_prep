class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0 ; i < s.length();i++)
        {
            
            while(s[i] == '#')
            {
                if(i == 0) s.erase(i,1);
                else if(i-1 >= 0)
                {
                    s.erase(i,1) ;
                    s.erase(i-1,1) ;
                    i-- ; 
                }
            }
        }
        
        
        for(int i=0 ; i < t.length();i++)
        {
            
            while(t[i] == '#')
            {
                if(i==0) t.erase(i,1) ; 
                else if(i-1 >= 0 )
                {
                    t.erase(i,1) ;
                    t.erase(i-1,1) ;
                    i-- ; 
                }
            }
        }
        
        return s == t ; 

    }
};
