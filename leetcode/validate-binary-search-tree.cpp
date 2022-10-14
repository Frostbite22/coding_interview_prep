/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> vect ; 
        inOrder(root,&vect);
        vector<int> vect_sorted = vect ; 
        sort(vect_sorted.begin(),vect_sorted.end());
        unordered_set<int> s ; 
        for(int i=0 ; i<vect.size(); i++) s.insert(vect[i]);
        return (vect_sorted == vect) && vect.size() == s.size() ; 
        
    }
    
    void inOrder(TreeNode* root,vector<int>* vect)
    {
        if(root!=nullptr)
        {
            inOrder(root->left,vect);
            vect->push_back(root->val);
            inOrder(root->right,vect);
        }
    }
};
