/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public void reorderList(ListNode head) {
        ArrayList<ListNode> dq = new ArrayList<ListNode>();
        ListNode p = head.next;
        while (p != null) {
            dq.add(p);
            p = p.next;
        }
        p = head;
        while (dq.size() > 0) {
            p.next = dq.get(dq.size() - 1);
            p = p.next;
            dq.remove(dq.size() - 1);
            if (dq.size() > 0) {
                p.next = dq.get(0);
                p = p.next;
                dq.remove(0);
            }
        }
        p.next = null;
    }
}
