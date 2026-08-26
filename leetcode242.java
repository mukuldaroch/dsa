import java.util.HashMap;

public class leetcode242 {
  public static void main(String[] args) {
    Solution test = new Solution();
    System.out.println(test.isAnagram("anagram", "nagaran"));
  }
}

class Solution {
  public boolean isAnagram(String s, String t) {
    if (s.length() != t.length()) {
      return false;
    }
    HashMap<Character, Integer> hash = new HashMap<>();
    for (int i = 0; i < s.length(); i++) {
      if (hash.containsKey(s.charAt(i))) {
        hash.put(s.charAt(i), hash.get(s.charAt(i)) + 1);
      } else hash.put(s.charAt(i), 1);
    }
    for (int i = 0; i < t.length(); i++) {
      if (hash.containsKey(t.charAt(i))) {
        hash.put(t.charAt(i), hash.get(t.charAt(i)) - 1);
      } else hash.put(t.charAt(i), 1);
    }

    for (int i = 0; i < s.length(); i++) {
      if (0 == hash.get(s.charAt(i))) {
      } else return false;
    }
    return true;
  }
}
