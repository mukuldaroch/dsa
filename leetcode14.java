public class leetcode14 {
  public static void main(String[] args) {
    Solution test = new Solution();
    String[] strs = {" hell ", " heha;sdf"};
    System.out.println(test.longestCommonPrefix(strs));
  }
}

class Solution {
  public String longestCommonPrefix(String[] strs) {

    if (strs.length <= 1) {
      return strs[0];
    }

    int comman = strs[0].length();

    // loop the array
    for (int i = 1; i < strs.length; i++) {

      int match = 0;

      // check each char in string
      for (int j = 0; j < strs[i].length(); j++) {

        // if value matches
        if (j < strs[0].length() && strs[0].charAt(j) == strs[i].charAt(j)) {
          match++;
        } else {
          // else exit from loop
          break;
        }
      }
      // check the minimum comman length
      comman = Math.min(comman, match);
    }

    return strs[0].substring(0, comman);
  }
}
