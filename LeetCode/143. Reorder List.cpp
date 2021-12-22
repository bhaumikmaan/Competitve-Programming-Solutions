/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *p = head->next;
        vector<ListNode*> dq;
        while (p) {
            dq.push_back(p);
            p = p->next;
        }
        p = head;
        while (!dq.empty()) {
            p->next = dq.back();
            dq.pop_back();
            p = p->next;
            if (!dq.empty()) {
                p->next = dq.front();
                p = p->next;
                dq.erase(dq.begin());
            }
        }
        p->next = NULL;
    }
};
