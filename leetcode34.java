public class leetcode34 {

  public static void main(String[] args) {
    Solution test = new Solution();
    // int[] nums = {5, 7, 7, 8, 8, 10};
    int[] nums = {5, 7, 7, 8, 8, 10};
    // int[] nums = {1};
    // int[] nums = {1, 2, 2, 2, 3, 5};
    int[] ans = test.searchRange(nums, 6);
    for (int i : ans) {
      System.out.print(i + " ");
    }
  }
}

class Solution {
  public int[] searchRange(int[] nums, int target) {
    int[] ans = {-1, -1};
    return ans;
  }

  private int upperBound(int[] nums, int target) {
    return 0;
  }

  private int lowerBound(int[] nums, int target) {
    return 0;
  }
}
