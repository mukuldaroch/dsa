# My Approach 
```cpp
class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int j = nums.size(), f = 0;
        for (int i = 0; i < j; i++) {
            if (nums[i] == 0 && i != f) {
                swap(nums[i], nums[f]);
                f++;
            } else if (nums[i] == 0) {
                f++;
                continue;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[j - 1]);
                i--;
                j--;
            }
        }
    }
};
```
# Better Code 
```cpp
class Solution {
public:
    void sortColors(vector<int> &nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {  // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
```
Algo = Dutch National Flag Algorithm
