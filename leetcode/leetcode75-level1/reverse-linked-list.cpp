/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* res = nullptr; 
        while(head !=nullptr)
        {
            if(res == nullptr)
            {
                res = new ListNode(head->val);
            }
            else 
            {
                ListNode* p = new ListNode(head->val) ; 
                p->next = res ; 
                res = p  ;
            }
            head = head->next ; 
        }
        
        return res ; 
    }
};
