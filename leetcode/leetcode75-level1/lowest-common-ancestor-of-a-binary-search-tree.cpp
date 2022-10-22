/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if (root == nullptr) return nullptr ;
        deque<TreeNode*> pdeq ; 
        deque<TreeNode*> qdeq ; 
        TreeNode* np = root ;
        TreeNode* nq = root ;
        while(np->val != p->val)
        {
            pdeq.push_front(np) ; 
            if(np->val > p->val)
            {
                np = np->left ;
            }
            else 
            {
                np = np->right ;
            }
        }
        pdeq.push_front(p) ; 
    
        while(nq->val != q->val)
        {
            qdeq.push_front(nq) ; 
            if(nq->val > q->val)
            {
                nq = nq->left ;
            }
            else 
            {
                nq = nq->right ;
            }
        }
        qdeq.push_front(q) ; 
    
        for(int i=0 ; i<pdeq.size();i++)
        {
            for(int j=0 ; j< qdeq.size();j++)
            {
                if(pdeq[i] == qdeq[j]) return pdeq[i]; 
            }
        }
        
      
        return root ;
    }
};
