public class leetcode1903 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.largestOddNumber("5802739"));
  }
}

class Solution {
  public String largestOddNumber(String num) {
    int maxOddNumberIndex = 0;
    boolean foundOddNumber = false;
    for (int i = 0; i < num.length(); i++) {

      if ((Character.getNumericValue(num.charAt(i))) % 2 != 0) {
        foundOddNumber = true;
        maxOddNumberIndex = i;
      }
    }
    return foundOddNumber == true ? num.substring(0, maxOddNumberIndex + 1) : "";
  }
}
