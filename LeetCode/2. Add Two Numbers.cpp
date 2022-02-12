/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0), *p = &preHead;
        int extra = 0 ;
        while (l1 || l2 || extra) 
        {
            int sum = extra ;
            if(l1)
            {
                sum += l1->val ;
            }
            if(l2)
            {
                sum += l2->val ;
            }
            extra = sum / 10 ;
            p->next = new ListNode(sum % 10);
            p = p->next ;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return preHead.next ;
    }
};
