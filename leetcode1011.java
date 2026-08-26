public class leetcode1011 {
  public static void main(String[] args) {
    Solution test = new Solution();
    // int[] weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int[] weights = {1, 2, 3, 1, 1};
    // int[] weights = {3, 2, 2, 4, 1, 4};
    System.out.println(test.shipWithinDays(weights, 4));
  }
}

class Solution {
  public int shipWithinDays(int[] weights, int days) {

    int maxWeight = 0;
    int totalWeight = 0;
    for (int item : weights) {
      totalWeight += item;
      maxWeight = Math.max(maxWeight, item);
    }
    System.out.println("totalWeight " + totalWeight);
    System.out.println("maxWeight " + maxWeight);

    int left = maxWeight;
    int right = totalWeight;

    while (left <= right) {
      int currentShipCapacity = ((right - left) / 2) + left;
      int daysRequired = daysRequiredForShipingCapacity(weights, currentShipCapacity);

      System.out.println("left = " + left + "  right = " + right);
      System.out.println("currentShipCapacity  " + currentShipCapacity);
      System.out.println("daysRequired  " + daysRequired);

      if (daysRequired > days) {
        left = currentShipCapacity + 1;
      } else {
        right = currentShipCapacity - 1;
      }
    }

    return left;
  }

  private int daysRequiredForShipingCapacity(int[] weights, int currentShipCapacity) {

    // start from maxWeight till the totalWeight of all items

    int daysSpent = 1;
    int currentWeight = 0;

    // get the no of days that items will be shiped with current capacity of ship
    for (int i = 0; i < weights.length; i++) {

      currentWeight += weights[i];

      if (currentWeight > currentShipCapacity) {
        daysSpent++;
        currentWeight = weights[i];
      }
    }
    return daysSpent;
  }
}
