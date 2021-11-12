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
    ListNode* removeElements(ListNode* head, int T) {
        if(!head) 
            return nullptr;
        head -> next = removeElements(head -> next, T) ;
        return head -> val == T ? head -> next : head ;
    }
};
