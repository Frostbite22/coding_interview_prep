typedef pair<int, int> pairs;

class Solution {
public:
    vector<vector<int>> adjacent(const vector<vector<int>>& image, int sr, int sc)
    {
        vector<vector<int>> adj ; 
        //going right
        if (sc+1 <image[0].size() && image[sr][sc+1] == image[sr][sc])
        {
            vector<int> v; 
            v.push_back(sr);
            v.push_back(sc+1);
            adj.push_back(v); 
        }
        //going up
        if (sr-1 >= 0 && image[sr-1][sc] == image[sr][sc])
        {
            vector<int> v; 
            v.push_back(sr-1);
            v.push_back(sc);
            adj.push_back(v); 
        }
        //going left
        if (sc-1 >= 0 && image[sr][sc-1] == image[sr][sc])
        {
            vector<int> v; 
            v.push_back(sr);
            v.push_back(sc-1);
            adj.push_back(v); 
        }
        //going down
        if (sr+1 <image.size() && image[sr+1][sc] == image[sr][sc])
        {
            vector<int> v; 
            v.push_back(sr+1);
            v.push_back(sc);
            adj.push_back(v); 
        }
        return adj; 
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        set<pairs> visited ; 
        vector<vector<int>> v1 ;
        vector<int> v2 ; 
        pairs x = make_pair(sr, sc);
        visited.insert(x) ; 
        v2.push_back(sr); 
        v2.push_back(sc); 
        v1.push_back(v2);
        while(!v1.empty())
        {
            //vector<int> current ; 
            auto current = v1.back() ; 
            v1.pop_back(); 
            vector<vector<int>> successors = adjacent(image,current[0],current[1]);
            for (auto& val : successors)
            {
                pairs x = make_pair(val[0],val[1]) ;
                if (visited.find(x) ==visited.end())
                {
                    vector<int> succ ; 
                    succ.push_back(val[0]);
                    succ.push_back(val[1]); 
                    v1.push_back(succ); 
                    visited.insert(x);   
                }    
            }
        }
        for (auto val : visited)
        {
            image[val.first][val.second] = newColor ; 
        }
        return image ; 
    }
};
