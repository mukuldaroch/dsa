public class leetcode35 {

  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {3, 5, 7, 9, 10};
    System.out.println(test.searchInsert(nums, 8));
  }
}

class Solution {
  public int searchInsert(int[] nums, int target) {
    int right = nums.length - 1;
    int left = 0;
    int mid = 0;
    while (right >= left) {
      mid = ((right - left) / 2) + left;
      System.out.println(left + "  " + mid + "  " + right);
      if (nums[mid] == target) {
        return mid;
      } else if (target > nums[mid]) {
        left = mid + 1;
      } else if (target < nums[mid]) {
        right = mid - 1;
      }
    }
    return target > nums[mid] ? mid + 1 : mid;
  }
}
// while (left <= right) {
//     int mid = left + (right - left) / 2;

//     if (nums[mid] == target) {
//         return mid;
//     } else if (nums[mid] < target) {
//         left = mid + 1;
//     } else {
//         right = mid - 1;
//     }
// }

// return left;
