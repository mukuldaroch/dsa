public class leetcode8 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.myAtoi("  00034"));
  }
}

class Solution {
  public int myAtoi(String s) {
    int ans = 0;
    int isNegative = 1;
    for (int i = 0; i < s.length(); i++) {
      if ('-' == s.charAt(i) && 1 == isNegative) {
        isNegative = -1;
      } else break;
      if (s.charAt(i)) {}
    }
    return ans * isNegative;
  }
}
