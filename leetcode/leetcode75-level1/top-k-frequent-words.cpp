class CompareDist
{
public:
    bool operator()(pair<int,string> n1 ,pair<int,string> n2) {
        if(n2.first == n1.first ) return n1.second > n2.second ; 
        return n2.first > n1.first ;

    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,CompareDist> pq ;
        unordered_map<string,int> umap; 
        for(int i=0; i<words.size();i++)
        {
            umap[words[i]]++ ; 
        }
    
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push({it->second,it->first});
        }
                
        
        vector<string> ans ; 
        for(int i=0;i<k;i++)
        {
            auto [a,b] = pq.top();
            pq.pop() ; 
            ans.push_back(b);
        }
        return ans ; 
    }
};
