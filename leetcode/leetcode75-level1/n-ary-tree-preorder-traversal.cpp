/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root == nullptr) return  {} ; 
        vector<Node*> queue ; 
        vector<int> res ; 
        queue.push_back(root) ; 
        Node* curr ; 
        while(!queue.empty())
        {
            curr = queue.back(); 
            queue.pop_back() ; 
            res.push_back(curr->val) ;
            vector<Node*> children = curr->children ; 
            for(int i=children.size()-1 ; i>= 0;i--)
            {
                queue.push_back(children[i]);
            }
        }
        
        return res ; 
    }
};
