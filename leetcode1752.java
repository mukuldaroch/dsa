public class leetcode1752 {

  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {3, 4, 5, 1, 2};
    System.out.println(test.check(nums));
  }
}

class Solution {
  public boolean check(int[] nums) {
    int flag = 0;
    int start = nums[0];
    if (nums.length < 2) {
      return true;
    }
    for (int i = 1; i < nums.length; i++) {
      int current = nums[i];
      int previous = nums[i - 1];
      if (previous > current) {
        flag++;
        if (start >= current && start >= nums[nums.length - 1] && flag <= 1) {
          start = current;
          continue;
        } else return false;
      } else return false;
    }
    return true;
  }
}
