import java.util.HashMap;
import java.util.HashSet;

public class leetcode205 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.isIsomorphic("add", "egg"));
  }
}

class Solution {
  public boolean isIsomorphic(String s, String t) {
    if (s.length() != t.length()) {
      return false;
    }
    HashMap<Character, Character> hash = new HashMap<>();
    HashSet<Character> set = new HashSet<>();

    for (int i = 0; i < s.length(); i++) {
      if (hash.containsKey(s.charAt(i))) {
        if (hash.get(s.charAt(i)) != t.charAt(i)) {
          return false;
        }
      } else {
        if (set.contains(t.charAt(i))) {
          return false;
        }
        hash.put(s.charAt(i), t.charAt(i));
        set.add(t.charAt(i));
      }
    }
    return true;
  }
}
