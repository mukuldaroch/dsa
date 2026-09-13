public class leetcode8 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.myAtoi("  0003-5a4"));
  }
}

class Solution {
  public int myAtoi(String s) {
    int ans = 0;
    int isNegative = 1;
    boolean startOfInt = false;
    for (int i = 0; i < s.length(); i++) {

      // select the sign
      if (false == startOfInt && s.charAt(i) == '-') {
        isNegative = -1;
      } else if (!(s.charAt(i) <= '9' && s.charAt(i) >= '0')
          && startOfInt == false
          && s.charAt(i) != '+'
          && s.charAt(i) != ' ') {
        return ans;
      }
      // convert char to int
      if (s.charAt(i) <= 58 && s.charAt(i) >= 48) {
        ans = ans * 10;
        ans = ans + (s.charAt(i) - '0');
        startOfInt = true;
      } else if (true == startOfInt && !(s.charAt(i) <= '9' && s.charAt(i) >= '0')) {
        return ans;
      }
    }
    return ans * isNegative;
  }
}
