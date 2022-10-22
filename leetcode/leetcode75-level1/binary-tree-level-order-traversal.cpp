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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==nullptr) return {} ; 
        vector<vector<int>> res ; 
        queue<TreeNode*> q ; 
        q.push(root) ; 
        vector<int> root_vect ;
        root_vect.push_back(root->val);
        res.push_back(root_vect);
        int length ; 

        while(!q.empty())
        {
            length = q.size() ; 
            vector<int> children ;

            for(int i=0 ; i<length; i++)
            {
                TreeNode* curr = q.front() ; 
                q.pop() ; 
         
                if(curr->left) 
                {
                    q.push(curr->left);
                    children.push_back(curr->left->val);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                    children.push_back(curr->right->val);
                }
            }
            if(!children.empty()) res.push_back(children) ;

        }
      
        return res ; 
    }
};
