class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
           
        // convert vector into a heap 
        make_heap(stones.begin(), stones.end());
        
        while(stones.size() >= 2)
        {
            // get max element in heap
            int top = stones.front() ;
            // delete max element
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            
            int second = stones.front() ;
            pop_heap(stones.begin(), stones.end());
            stones.pop_back() ;
    
            if (top != second)
            {
                // push element into a heap
                stones.push_back(top-second);
                push_heap(stones.begin(), stones.end());
            }   
        }
        
        return stones.empty() ? 0 : stones[0] ; 

    }
};
