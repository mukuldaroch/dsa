# My Approach
```cpp class Solution {
  public:
    bool isPalindrome(string s) {
        bool x = true;
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (isalnum(s[i]) == 0 && isalnum(s[j]) == 0) {
                continue;
            }
            if (isalnum(s[i]) == 0) {
                j++;
                continue;
            }
            if (isalnum(s[j]) == 0) {
                i--;
                continue;
            }
            if (isalnum(s[i]) && isalnum(s[j])) {
                if (tolower(s[i]) != tolower(s[j])) {
                    x = false;
                    return x;
                }
            }
        }
        return x;
    }
};
```
# Better Code 
```cpp
class Solution {
  public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) i++;  // Skip non-alphanumeric
            while (i < j && !isalnum(s[j])) j--;  // Skip non-alphanumeric

            if (tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }
        return true;
    }
};
```
