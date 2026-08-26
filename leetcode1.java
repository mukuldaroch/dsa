import java.util.HashMap;
import java.util.Map;

public class leetcode1 {

  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {6};
    int[] result = test.twoSum(nums, 6);
    System.out.println("----");
    for (int i : result) {
      System.out.println(i);
    }
    System.out.println("----");
  }
}

class Solution {
  public int[] twoSum(int[] nums, int target) {
    int[] ans = {0, 0};
    Map<Integer, Integer> hash = new HashMap<>();

    for (int i = 0; i < nums.length; i++) {
      if (hash.containsKey(target - nums[i])) {
        ans[0] = hash.get(target - nums[i]);
        ans[1] = i;
        return ans;
      }
      hash.put(nums[i], i);
    }
    return ans;
  }
}
