# My Approach 
```cpp
class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        if (digits[digits.size() - 1] < 9) {
            digits[digits.size() - 1]++;
        } else
            for (int i = digits.size() - 1; i >= 0; i--) {
                if (digits[i] != 9) {
                    digits[i]++;
                    return digits;
                }
                if (i == 0) {
                    digits[i] = 1;
                    digits.emplace_back(0);
                    return digits;
                }
                if (digits[i] == 9) {
                    digits[i] = 0;
                    continue;
                }
            }
        return digits;
    }
};

```
# Better Code 
```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the digits from the last to the first
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No carry, return the result
            }
            digits[i] = 0; // If it's 9, set it to 0 and continue
        }
        
        // If we reach here, it means all digits were 9 (e.g., 999 → 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
```
