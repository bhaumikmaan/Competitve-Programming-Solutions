/***  KNOWLEDGE IS POWER  ***/

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
    ListNode* u;
    Solution(ListNode* head) {
        u = head;
    }
    
    int getRandom() {
        int index = 1;
        int res = 0;
        ListNode* curr = u;
        while(curr){
            if(rand() % index == 0){
                res = curr->val;
            }
            index++;
            curr = curr->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
