public class leetcode142 {

  public static void main(String[] args) {
    Solution test = new Solution();

    ListNode node5 = new ListNode(5);
    ListNode node4 = new ListNode(4, node5);
    ListNode node3 = new ListNode(3, node4);
    ListNode node2 = new ListNode(2, node3);
    ListNode node1 = new ListNode(1, node2);
    ListNode head = node4;

    ListNode iter = test.detectCycle(head);

    System.out.println("------");
    if (iter != null) {
      System.out.println(iter.val);
    }

    // while (iter != null) {
    //   System.out.println(iter.val);
    //   iter = iter.next;
  }
}

class Solution {
  public ListNode detectCycle(ListNode head) {

    ListNode fastPointer = head;
    ListNode slowPointer = head;

    while (null != fastPointer && null != fastPointer.next) {

      fastPointer = fastPointer.next.next;
      slowPointer = slowPointer.next;

      if (fastPointer == slowPointer) {
        return slowPointer;
      }
    }
    return null;
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
