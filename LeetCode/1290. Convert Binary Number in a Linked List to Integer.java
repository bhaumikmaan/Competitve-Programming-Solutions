/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int getDecimalValue(ListNode n) {
        int num= 0;
        while(n != null)
        {
            num= (num<<1) | n.val ;
            n = n.next ;
        }
        return num ;
    }
}
