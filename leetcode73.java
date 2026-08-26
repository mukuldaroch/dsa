public class leetcode73 {
  public static void main(String[] args) {
    int[][] nums = {{0, 1, 2, 0}};
    Solution test = new Solution();
    test.setZeroes(nums);
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums[0].length; j++) {
        System.out.print(nums[i][j] + " ");
      }
      System.out.println();
    }
  }
}

class Solution {
  public void setZeroes(int[][] matrix) {
    int[] vert = new int[matrix[0].length];
    for (int i = 0; i < matrix.length; i++) {
      int flag = 0;
      for (int j = 0; j < matrix[0].length; j++) {
        if (0 == matrix[i][j]) {
          vert[j]++;
          flag++;
        }
      }
      if (flag > 0) {
        setColZero(matrix, i);
      }
    }
    for (int i = 0; i < vert.length; i++) {
      if (vert[i] > 0) {
        setRowZero(matrix, i);
      }
    }
  }

  public void setColZero(int[][] matrix, int i) {
    for (int k = 0; k < matrix[0].length; k++) {
      matrix[i][k] = 0;
    }
  }

  public void setRowZero(int[][] matrix, int j) {
    for (int k = 0; k < matrix.length; k++) {
      matrix[k][j] = 0;
    }
  }
}
