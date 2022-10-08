class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> umap ; 
        vector<char> mapped ; 
        for(int i=0; i< s.length();i++)
        {
            if(umap.find(s[i]) == umap.end())
            {
                if(find(mapped.begin(),mapped.end(),t[i]) != mapped.end()) return false ;
                else 
                {
                    umap[s[i]] = t[i] ;  
                    mapped.push_back(t[i]);
                }
            }
            else 
            {
                if(umap[s[i]] == t[i]) continue ; 
                else return false ;
            }
        }
        
        return true ; 
    }
};
