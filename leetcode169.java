public class leetcode169 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {2, 2, 1, 1, 1, 2, 2};
    System.out.println(nums.length - 1);
    System.out.println((nums.length - 1) / 2);
    System.out.println(test.majorityElement(nums));
  }
}

class Solution {
  public int majorityElement(int[] nums) {
    int count = 0;
    int current = 0;

    for (int j = 0; j < nums.length; j++) {

      if (0 == count) {
        current = nums[j];
        count++;
      } else if (current == nums[j]) {
        count++;
      } else {
        count--;
      }
    }
    return current;
  }
}
