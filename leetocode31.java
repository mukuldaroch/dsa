import java.util.Arrays;

public class leetocode31 {
  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {1, 3, 2};
    test.nextPermutation(nums);
    for (int i : nums) {
      System.out.print(i);
    }
  }
}

class Solution {
  public void nextPermutation(int[] nums) {
    int curMax = 0;
    int flag = 0;
    for (int i = nums.length - 1; i >= 0; i--) {
      curMax = Math.max(curMax, nums[i]);
      if (nums[i] < curMax) {
        int currMin = nums[i];
        for (int j = nums.length - 1; j > i; j--) {
          if (nums[j] > currMin) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            int k = nums.length - 1;
            while (i + 1 <= k) {
              temp = nums[k];
              nums[k] = nums[i + 1];
              nums[i + 1] = temp;
              i++;
              k--;
            }
            flag++;
            break;
          }
        }
        break;
      }
    }
    if (flag < 1) {
      Arrays.sort(nums);
    }
  }
}
