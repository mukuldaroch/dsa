public class leetcode48 {
  public static void main(String[] args) {
    int[][] nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution test = new Solution();
    test.rotate(nums);
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums[0].length; j++) {
        System.out.print(nums[i][j] + " ");
      }
      System.out.println();
    }
  }
}

class Solution {
  public void rotate(int[][] matrix) {
    // reverse the matrix diognally
    int len = 0;
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < len; j++) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
      len++;
    }
    // reverse the inside matrix
    for (int i = 0; i < matrix.length; i++) {
      int k = 0;
      for (int j = matrix.length - 1; j > k; j--) {
        int temp = matrix[i][k];
        matrix[i][k] = matrix[i][j];
        matrix[i][j] = temp;
        k++;
      }
    }
  }
}
