# My Approach 
```cpp
class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> hash;
        int max = 0, majorityElement;

        for (int i : nums) {
            hash[i]++;
            if (hash[i] > max) {
                max = hash[i];
                majorityElement = i;
            }
        }
        return majorityElement;
    }
};
```
# Optimal Approach 
```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate = -1, votes = 0;
    int n=nums.size();
    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    return -1;
    }
};
```
