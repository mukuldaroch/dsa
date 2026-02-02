# My Approach 
```cpp
class Solution {
  public:
    int fib(int n) {
        vector<int> arr = {0, 1};
        if (n == 0) {
            return arr[0];
        } else if (n == 1) {
            return arr[1];
        }
        for (int i = 1; i < n; i++) {
            arr.emplace_back(arr[i - 1] + arr[i]);
        }
        return arr[n];
    }
};
```
# Better Code 
```cpp
class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        vector<int> arr = {0, 1};
        for (int i = 2; i <= n; i++) {
            arr.push_back(arr[i - 1] + arr[i - 2]);
        }
        return arr[n];
    }
};
```
