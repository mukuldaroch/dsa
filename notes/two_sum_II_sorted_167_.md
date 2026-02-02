# My Approach 
```cpp
class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        vector<int> ret(2, 0);
        while (i < j) {
            if (target == numbers[i] + numbers[j]) {
                ret[0] = i + 1;
                ret[1] = j + 1;
                return ret;
            } else if (target > numbers[i] + numbers[j]) {
                i++;
                continue;
            } else if (target < numbers[i] + numbers[j]) {
                j--;
            }
        }
        return ret;
    }
};
```
# Better Code 

```cpp
class Solution {
public:
    vector<int> twoSum(const vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                return {left + 1, right + 1}; // Directly return the result
            } 
            else if (sum < target) {
                left++; // Move left pointer to increase sum
            } 
            else {
                right--; // Move right pointer to decrease sum
            }
        }
        return {}; // Shouldn't reach here, as per problem constraints
    }
};
```
# learnings 
1. we can reaturn array wihtout defining one using return {a,b}

