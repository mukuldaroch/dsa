# My Approach 
```cpp
class Solution {
  public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        goal = goal + goal;
        for (int i = s.size() - 1; i < goal.size() - 1; i++) {
            if (goal.substr(i - s.size() + 1, s.size()) == s) {
                return true;
            }
        }
        return false;
    }
};
```
# Better Code / Approach
```cpp

class Solution {
  public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        return (goal + goal).find(s) != string::npos;
    }
};
```
# Learnings 
1) find , substr functions in cpp
