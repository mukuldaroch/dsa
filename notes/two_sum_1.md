# My Approach
```cpp
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> list;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target && i!=j) {
          list = {i, j};
        }
      }
    }
    return list;
  }
};
```
Time complexity: O(n^2)
Space complexity: O(1)
___

# Other Approaches
# >>> Sorting
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> A;
        for (int i = 0; i < nums.size(); i++) {
            A.push_back({nums[i], i});
        }

        sort(A.begin(), A.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int cur = A[i].first + A[j].first;
            if (cur == target) {
                return {min(A[i].second, A[j].second), 
                        max(A[i].second, A[j].second)};
            } else if (cur < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};
```
Time complexity: O(n log n)
Space complexity: O(n)
# >>> Hash Map (Two Pass)
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;  // val -> index

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (indices.count(diff) && indices[diff] != i){
                return {i, indices[diff]};
            }
        }

        return {};
    }
};
```
Time complexity: O(n)
Space complexity: O(n)
___

# Optimised Approach
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> prevMap; 

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (prevMap.find(diff) != prevMap.end()) {
                return {prevMap[diff], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
```
Time complexity: O(n)
Space complexity: O(n)
