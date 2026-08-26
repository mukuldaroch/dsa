public class leetcode2149 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {3, 1, -2, -5, 2, -4};
    int[] ans = test.rearrangeArray(nums);
    for (int i : ans) {
      System.out.println(i);
    }
  }
}

class Solution {
  public int[] rearrangeArray(int[] nums) {
    int[] sol = nums.clone();
    int positive = 0;
    int negative = 1;
    for (int i : nums) {
      if (i >= 0) {
        sol[positive] = i;
        positive += 2;
      } else {
        sol[negative] = i;
        negative += 2;
      }
    }
    return sol;
  }
}
