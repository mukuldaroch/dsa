public class leetcode2095 {

  public static void main(String[] args) {
    ListNode node7 = new ListNode(7);
    ListNode node6 = new ListNode(6);
    ListNode node5 = new ListNode(5);
    ListNode node4 = new ListNode(4);
    ListNode node3 = new ListNode(3);
    ListNode node2 = new ListNode(2);
    ListNode node1 = new ListNode(1);
    node1.next = node2;
    node2.next = node3;
    node3.next = node4;
    node4.next = node5;
    node5.next = node6;
    node6.next = node7;
    ListNode head = node1;
    Solution test = new Solution();

    // System.out.println(test.deleteMiddle(node3));
    ListNode iter = test.deleteMiddle(head);

    System.out.println("------");

    while (iter != null) {
      System.out.println(iter.val);
      iter = iter.next;
    }
  }
}

class Solution {
  public ListNode deleteMiddle(ListNode head) {

    ListNode fastPointer = head.next;
    ListNode slowPointer = head;

    while (fastPointer != null && fastPointer.next != null) {
      fastPointer = fastPointer.next.next;
      slowPointer = slowPointer.next;
      System.out.println(slowPointer.val);
    }

    return head;
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
