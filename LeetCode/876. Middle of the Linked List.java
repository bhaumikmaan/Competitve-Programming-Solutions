/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode hare= head, tortoise= head;
        while(hare!=null)
        {
            if((hare = hare.next) == null) 
                break;
            hare = hare.next;
            tortoise = tortoise.next;
        }
        return tortoise;
    }
}
