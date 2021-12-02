/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public ListNode oddEvenList(ListNode head) {
        ListNode evenNode = null ;
    	ListNode oddNode = head ;
    	ListNode evenHead = null ;
        if(head == null)
    	{
    		return null ;
    	}
        if(head.next != null)
    	{
    		evenNode = head.next ;
    		evenHead = evenNode ;
    	}
    	while (oddNode.next != null && evenNode.next != null)
    	{
    		oddNode.next = oddNode.next.next ;
    		evenNode.next = evenNode.next.next ;
    		oddNode = oddNode.next ;
    		evenNode = evenNode.next ;   		
    	}
    	oddNode.next = evenHead ;
        return head ;
    }
}
