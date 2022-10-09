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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* ptr1 = list1 ; 
        ListNode* ptr2 = list2 ; 
        ListNode* res = nullptr;
        ListNode* p = nullptr ; 
        while(ptr1 !=nullptr && ptr2 !=nullptr )
        {
            if(p == nullptr)
            {
                if(ptr1->val < ptr2->val)
                {
                    p = new ListNode(ptr1->val)  ;
                    ptr1 = ptr1->next ; 

                }
                else 
                {
                    p = new ListNode(ptr2->val)  ;
                    ptr2 = ptr2->next ; 

                }
                res = p ;
            }
            else 
            {
                if(ptr1->val < ptr2->val)
                {
                    p->next = new ListNode(ptr1->val)  ;
                    ptr1 = ptr1->next ; 
                }
                else 
                {
                    p->next = new ListNode(ptr2->val)  ;
                    ptr2 = ptr2->next ; 

                }
                p = p->next ; 
            }
           
        }
        
        
        if(ptr1 == nullptr)
        {
            if(p!=nullptr) p->next = ptr2 ; 
            else res = ptr2 ; 
        }
        if(ptr2 == nullptr)
        {
            if(p!=nullptr) p->next = ptr1 ; 
            else res = ptr1 ; 
        }
        
        return res ;
    }
};
