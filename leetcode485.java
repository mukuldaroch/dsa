public class leetcode485 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] arr = {1, 1, 0, 1, 1, 1};
    System.out.println(test.findMaxConsecutiveOnes(arr));
  }
}

class Solution {
  public int findMaxConsecutiveOnes(int[] nums) {
    int max = 0;
    int count = 0;
    for (int i : nums) {
      if (1 != i) {
        count = 0;
      } else if (1 == i) {

        count++;
        if (max < count) {
          max = count;
        }
      }
    }
    return max;
  }
}
