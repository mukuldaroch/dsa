public class leetcode26 {

  public static void main(String[] args) {
    Solution test = new Solution();

    int[] arr = {0};
    System.out.println(test.removeDuplicates(arr));
    System.out.println("------------");
    for (int i : arr) {
      System.out.println(i);
    }
  }
}

class Solution {
  public int removeDuplicates(int[] nums) {
    int k = 0;
    for (int i = 1; i < nums.length; i++) {
      if (nums[k] != nums[i]) {
        nums[k + 1] = nums[i];
        k++;
      }
    }
    return k + 1;
  }
}
