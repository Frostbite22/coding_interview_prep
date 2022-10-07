class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
    int left_sum = 0 ; 
    int right_sum = 0 ; 
    
    for(int i=1 ; i<nums.size(); i++)
        right_sum += nums[i] ; 
    if(right_sum == 0 ) return 0 ; 
        
    for (int j=1 ; j<nums.size();j++)
    {
        left_sum+= nums[j-1] ; 
        right_sum-= nums[j] ; 
        
        if(right_sum == left_sum) return j ; 
    }
    
    if(left_sum == 0) return nums.size() - 1 ; 
    else return -1 ; 
    
    
    }
};
