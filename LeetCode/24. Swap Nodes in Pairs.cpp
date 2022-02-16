/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head-> next)
            return head ;
        ListNode* temp = head ;
        while(temp)
        {
            if(temp->next)       
            {
                swap(temp->val, temp->next->val) ;
                temp = temp->next->next;          
            }
			else
                break ;
        }
        
        return head ;
    }
};
