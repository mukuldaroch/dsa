public class leetcode283 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] arr = {0, 1};
    test.moveZeroes(arr);
    System.out.println("------------");
    for (int i : arr) {
      System.out.println(i);
    }
  }
}

class Solution {
  public void moveZeroes(int[] nums) {
    int k = -1;
    for (int current = 0; current < nums.length; current++) {
      if (0 != nums[current] && k >= 0) {
        nums[k] = nums[current];
        nums[current] = 0;
        k++;
      } else if (0 == nums[current] && k < 0) {
        k = current;
      }
    }
  }
}
