public class leetcode141 {

  public static void main(String[] args) {
    ListNode node5 = new ListNode(5);
    ListNode node4 = new ListNode(4, node5);
    ListNode node3 = new ListNode(3, node4);
    ListNode node2 = new ListNode(2, node3);
    ListNode node1 = new ListNode(1, node2);
    ListNode head = node1;
    Solution test = new Solution();

    System.out.println(test.hasCycle(node3));
    // ListNode iter = test.hasCycle(node5);

    System.out.println("------");
    // while (iter != null) {
    //   System.out.println(iter.val);
    //   iter = iter.next;
  }
}

class Solution {
  public boolean hasCycle(ListNode head) {

    if (head == null || head.next == null || head.next.next == null) {
      return false;
    }

    ListNode fastPointer = head.next.next;
    ListNode SlowPointer = head;

    while (SlowPointer != null) {

      if (fastPointer == SlowPointer) {
        return true;
      }

      if (fastPointer.next == null || fastPointer.next.next == null) {
        return false;
      }

      fastPointer = fastPointer.next.next;
      SlowPointer = SlowPointer.next;
    }
    return false;
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
