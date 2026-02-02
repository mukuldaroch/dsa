# My Approach 
```cpp
class Solution {
  public:
    int pivotIndex(vector<int> &nums) {
        int left_sum = 0, right_sum = 0;
        for (int x : nums) {
            right_sum += x;
        }
        right_sum -= nums[0];
        if (left_sum == right_sum) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            left_sum += nums[i - 1];
            right_sum -= nums[i];
            if (left_sum == right_sum) {
                return i;
            }
        }
        return -1;
    }
};
```
# Better Code 
```cpp
class Solution {
  public:
    int pivotIndex(vector<int> &nums) {
        int totalSum = 0, leftSum = 0;

        // Calculate total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate through the array and check for pivot index
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i]; // Right sum is what remains
            if (leftSum == rightSum) {
                return i; // Found the pivot index
            }
            leftSum += nums[i]; // Update left sum
        }

        return -1; // No pivot index found
    }
};
```
