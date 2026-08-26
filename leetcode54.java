import java.util.ArrayList;
import java.util.List;

public class leetcode54 {
  public static void main(String[] args) {
    Solution test = new Solution();

    int[][] matrix = {{1}, {4}, {2}, {5}};
    List<Integer> arr = test.spiralOrder(matrix);
    for (Integer integer : arr) {
      System.out.print(integer + "  ");
    }
  }
}

class Solution {
  public List<Integer> spiralOrder(int[][] matrix) {
    List<Integer> arr = new ArrayList<>();

    int left = 0;
    int right = matrix[0].length - 1;
    int top = 0;
    int bottom = matrix.length - 1;
    while (left <= right && top <= bottom) {

      if (left < right) {
        leftToRight(matrix, arr, left, right, top);
        top++;
      }
      if (top < bottom) {
        topToBottom(matrix, arr, top, bottom, right);
        right--;
      }
      if (left < right) {
        rightToLeft(matrix, arr, right, left, bottom);
        bottom--;
      }
      if (top < bottom) {}

      bottomToTop(matrix, arr, bottom, top, left);
      left++;
    }

    return arr;
  }

  public void leftToRight(int[][] matrix, List<Integer> arr, int left, int right, int top) {
    for (int i = left; i <= right; i++) {
      arr.add(matrix[top][i]);
    }
  }

  public void topToBottom(int[][] matrix, List<Integer> arr, int top, int bottom, int right) {
    for (int i = top; i <= bottom; i++) {
      arr.add(matrix[i][right]);
    }
  }

  public void rightToLeft(int[][] matrix, List<Integer> arr, int right, int left, int bottom) {
    for (int i = right; i >= left; i--) {
      arr.add(matrix[bottom][i]);
    }
  }

  public void bottomToTop(int[][] matrix, List<Integer> arr, int bottom, int top, int left) {
    for (int i = bottom; i >= top; i--) {
      arr.add(matrix[i][left]);
    }
  }
}
