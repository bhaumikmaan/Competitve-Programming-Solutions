    ListNode* mergeList(ListNode *p, ListNode *q) {
        ListNode *start = new ListNode(-1);
        ListNode *head = new ListNode;
        head = start;
        while (p && q) {
            if (p->val > q->val) {
                start->next = q;
                q = q->next;
            }
            else {
                start->next = p;
                p = p->next;
            }
            start = start->next;
        }
        while(p) {
            start->next = p;
            start = start->next;
            p = p->next;
        }
        while(q) {
            start->next = q;
            start = start->next;
            q = q->next;
        }
        return head->next;
    }
    
