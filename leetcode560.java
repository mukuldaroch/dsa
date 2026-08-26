import java.util.HashMap;

public class leetcode560 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {1, 1};
    System.out.println(test.subarraySum(nums, 0));
  }
}

class Solution {
  public int subarraySum(int[] nums, int k) {
    int curSum = 0;
    int count = 0;

    HashMap<Integer, Integer> hash = new HashMap<>();
    hash.put(0, 1);

    for (int i : nums) {

      curSum += i;

      if (hash.get(curSum - k) != null) {
        count += hash.get(curSum - k);
      }

      hash.put(curSum, hash.getOrDefault(curSum, 0) + 1);
    }
    return count;
  }
}
