public class leetcode13 {

  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.romanToInt("MCMXCIV"));
  }
}

class Solution {
  public int romanToInt(String s) {
    int currentSum = charToInt(s.charAt(s.length() - 1));
    int previous = charToInt(s.charAt(s.length() - 1));

    for (int i = s.length() - 2; i >= 0; i--) {
      int currentNumber = charToInt(s.charAt(i));
      if (previous > currentNumber) {
        currentSum = currentSum - currentNumber;
      } else {
        currentSum = currentSum + currentNumber;
        previous = currentNumber;
      }
    }
    return currentSum;
  }

  private int charToInt(char c) {

    if (c == 'I') {
      return 1;
    }
    if (c == 'V') {
      return 5;
    }
    if (c == 'X') {
      return 10;
    }
    if (c == 'L') {
      return 50;
    }
    if (c == 'C') {
      return 100;
    }
    if (c == 'D') {
      return 500;
    }
    return 1000;
  }
}
