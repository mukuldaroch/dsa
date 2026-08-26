public class leetcode189 {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[] nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 29);
    for (int i : nums) {
      System.out.print(i);
    }
  }
}

class Solution {
  public void rotate(int[] nums, int k) {
    int end = nums.length - 1;

    k = k % nums.length;
    System.out.println(k);

    for (int start = 0; start < nums.length / 2; start++) {
      int temp;
      temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      end--;
    }

    int end2 = k - 1;
    for (int start2 = 0; start2 < end2; start2++) {
      int temp;
      temp = nums[start2];
      nums[start2] = nums[end2];
      nums[end2] = temp;
      end2--;
    }

    int end3 = nums.length - 1;
    for (int start3 = k; start3 < end3; start3++) {
      int temp;
      temp = nums[start3];
      nums[start3] = nums[end3];
      nums[end3] = temp;
      end3--;
    }
  }
}
