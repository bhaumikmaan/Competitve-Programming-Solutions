/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newList = new ListNode();
        ListNode *curr = newList;
        int currSum = 0 ;
        while(head) 
        {
            if(head->val==0) 
            {
                if(currSum!=0)
                {
                    curr->next = new ListNode(currSum);
                    curr=curr->next;
                }
                currSum=0;
            }
            currSum+=head->val;
            head=head->next;
        }

       return newList->next; 
    }
};
