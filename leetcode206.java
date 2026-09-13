public class leetcode206 {

  public static void main(String[] args) {
    ListNode node5 = new ListNode(5);
    ListNode node4 = new ListNode(4, node5);
    ListNode node3 = new ListNode(3, node4);
    ListNode node2 = new ListNode(2, node3);
    ListNode node1 = new ListNode(1, node2);
    ListNode head = node1;
    Solution test = new Solution();

    ListNode iter = test.reverseList(node5);
    System.out.println("------");

    while (iter != null) {
      System.out.println(iter.val);
      iter = iter.next;
    }
  }
}

class Solution {
  public ListNode reverseList(ListNode head) {
    ListNode prev = null;
    ListNode curr = head;

    while (curr != null) {
      ListNode next = curr.next; // save next node
      curr.next = prev; // reverse link
      prev = curr; // move prev forward
      curr = next; // move curr forward
    }

    return prev;
  }
}

class ListNode {
  int val;
  ListNode next;

  ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }

  ListNode(ListNode next) {
    this.val = 0;
    this.next = next;
  }

  ListNode(int val) {
    this.val = val;
    this.next = null;
  }

  ListNode() {
    this.next = null;
  }
}
