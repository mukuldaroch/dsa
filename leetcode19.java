public class leetcode19 {
  public static void main(String[] args) {
    Solution test = new Solution();

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

    ListNode iter = test.removeNthFromEnd(node6, 2);

    System.out.println("------");

    while (iter != null) {
      System.out.println(iter.val);
      iter = iter.next;
    }
  }
}

class Solution {
  public ListNode removeNthFromEnd(ListNode head, int n) {
    ListNode iter = head;
    int length = 0;

    while (iter != null) {
      length++;
      iter = iter.next;
    }

    if (length == n) {
      head = head.next;
      return head;
    }

    length = length - (n + 1);
    iter = head;

    for (int i = 0; i < length; i++) {
      iter = iter.next;
    }

    iter.next = iter.next.next;

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
