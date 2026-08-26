public class leetcode151 {

  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.reverseWords("the sky    is blue"));
  }
}

class Solution {
  public String reverseWords(String s) {
    StringBuilder ans = new StringBuilder();

    boolean firstWord = true;
    boolean newWord = true;
    int wordEnd = 0;

    // start the loop from string end
    for (int current = s.length() - 1; current >= 0; current--) {
      // current word is not a space and it is end of new word
      if (' ' != s.charAt(current) && true == newWord) {
        wordEnd = current;
        newWord = false;
      }
      if ((' ' == s.charAt(current) || current == 0) && false == newWord) {
        // if the current word is a space
        // check if this is our first word
        if (true != firstWord) {
          ans.append(' ');
        }
        // inser the word in correct order
        for (int start = current == 0 ? current : current + 1; start <= wordEnd; start++) {
          ans.append(s.charAt(start));
        }
        firstWord = false;
        newWord = true;
      }
    }
    return ans.toString();
  }
}
