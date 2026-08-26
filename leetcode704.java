public class leetcode704 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {-1};
    System.out.println(test.search(nums, -1));
  }
}

class Solution {
  public int search(int[] nums, int target) {
    int right = nums.length - 1;
    int left = 0;
    int mid;
    while (right >= left) {
      mid = ((right - left) / 2) + left;
      if (target == nums[mid]) {
        return mid;
      } else if (target < nums[mid]) {
        right = mid - 1;

      } else {
        left = mid + 1;
      }
    }
    return -1;
  }
}
