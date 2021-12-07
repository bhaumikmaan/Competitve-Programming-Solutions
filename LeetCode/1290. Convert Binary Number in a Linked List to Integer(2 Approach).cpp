/***  KNOWLEDGE IS POWER  ***/

//  APPROACH 1  //
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0;
        while(head!=NULL){
            res=res*2+head->val;
            head=head->next;
        }
        return res;
    }
};


//  APPROACH 2  //
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        ListNode* iter = head;
        while (iter != NULL) {
            res <<= 1;
            res |= iter->val;
            iter = iter->next;
        }
        return res;
    }
};
