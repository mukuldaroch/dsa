public class leetcode75 {
  public static void main(String[] args) {
    int[] nums = {2, 2, 0, 2};
    Solution test = new Solution();
    test.sortColors(nums);
    for (int i : nums) {
      System.out.print(i);
    }
  }
}

class Solution {
  public void sortColors(int[] nums) {
    int start = 0;
    int end = nums.length - 1;
    for (int i = 0; i <= end; i++) {
      if (0 == nums[i]) {
        int temp = nums[start];
        nums[start] = nums[i];
        nums[i] = temp;
        start++;
      } else if (2 == nums[i]) {
        int temp = nums[end];
        nums[end] = nums[i];
        nums[i] = temp;
        end--;
        i--;
      }
    }
  }
}
