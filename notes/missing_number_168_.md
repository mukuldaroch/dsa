# My Approach 
```cpp
class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        int x = nums.size(), real = (((x * x) - x) / 2);
        int i = nums.size() + 1, next = (((i * i) - i) / 2);
        if (sum == real) {
            return nums.size();
        } else
            return next - sum;
    }
};
```
# Better Code 
```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        for (int num : nums) actual_sum += num;
        return expected_sum - actual_sum;
    }
};
```
