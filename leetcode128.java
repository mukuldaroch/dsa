import java.util.HashMap;

public class leetcode128 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    System.out.println(test.longestConsecutive(nums));
  }
}

class Solution {
  public int longestConsecutive(int[] nums) {
    HashMap<Integer, Integer> hash = new HashMap<>();
    for (int i : nums) {
      hash.put(i, 0);
    }
    int max = 0;
    for (int i : nums) {
      int j = i;
      int count = 0;
      if (hash.get(i) > 1) {
        continue;
      }
      while (true) {
        if (hash.containsKey(j) && hash.get(j) < 1) {
          count++;
          hash.put(i, count);
          j--;
        } else if (hash.containsKey(j) && hash.get(j) > 1) {
          count += hash.get(j);
          max = Math.max(max, count);
          break;
        } else break;
      }
    }
    return max;
  }
}
