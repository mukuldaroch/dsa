public class leetcode234 {
  public static void main(String[] args) {
    Solution test = new Solution();

    ListNode node7 = new ListNode(7);
    ListNode node6 = new ListNode(6);
    ListNode node5 = new ListNode(5);
    ListNode node3 = new ListNode(3);
    ListNode node2 = new ListNode(2);
    ListNode node1 = new ListNode(1);
    // hello hello hello hello hello hello
    node1.next = node2;
    node2.next = node3;
    node3.next = node5;
    node5.next = node6;
    node6.next = node7;
    ListNode head = node1;

    System.out.println(test.isPalindrome(head));

    System.out.println("------");

    ListNode iter = head;
    while (iter != null) {
      System.out.println(iter.val);
      iter = iter.next;
    }
  }
}

class Solution {
  public boolean isPalindrome(ListNode head) {

    if (head == null || head.next == null) {
      return true;
    }

    // Step 1: Find the middle
    ListNode slow = head;
    ListNode fast = head;

    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }

    // Step 2: Reverse second half
    ListNode prev = null;

    while (slow != null) {
      ListNode nextNode = slow.next;
      slow.next = prev;
      prev = slow;
      slow = nextNode;
    }

    // Step 3: Compare both halves
    ListNode left = head;
    ListNode right = prev;

    while (right != null) {
      System.out.println(left.val + "  " + right.val);
      if (left.val != right.val) {
        return false;
      }

      left = left.next;
      right = right.next;
    }

    return true;
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
