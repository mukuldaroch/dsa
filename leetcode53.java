public class leetcode53 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {5, -4, -1, -7, -8};
    System.out.println(test.maxSubArray(nums));
  }
}

class Solution {
  public int maxSubArray(int[] nums) {
    int current = Integer.MIN_VALUE;
    int max = Integer.MIN_VALUE;

    for (int i = 0; i < nums.length; i++) {
      if (current > 0) {
        current += nums[i];

      } else if (nums[i] > current) {
        current = nums[i];
      }

      if (max < current) {
        max = current;
      }
    }
    return max;
  }
}
