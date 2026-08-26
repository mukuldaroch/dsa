public class leetcode121 {

  public static void main(String[] args) {
    Solution test = new Solution();
    int[] nums = {7, 6, 4, 3, 1};
    System.out.println(test.maxProfit(nums));
  }
}

class Solution {
  public int maxProfit(int[] prices) {
    int sell = 0;
    int buy = prices[0];
    int maxprofit = 0;
    for (int i : prices) {
      if (i < buy) {
        buy = i;
        sell = 0;
      }
      sell = Math.max(i, sell);
      maxprofit = Math.max(maxprofit, sell - buy);
    }

    return maxprofit;
  }
}
