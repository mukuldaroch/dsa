public class leetcode1614 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println("anagram");
  }
}

class Solution {
  public int maxDepth(String s) {

    int maxDepth = 0;
    int currentDepth = 0;
    for (int i = 0; i < s.length(); i++) {

      if ('(' == s.charAt(i)) {
        currentDepth++;
      } else if (')' == s.charAt(i)) {
        currentDepth--;
      }
      maxDepth = Math.max(currentDepth, maxDepth);
    }

    return maxDepth;
  }
}
