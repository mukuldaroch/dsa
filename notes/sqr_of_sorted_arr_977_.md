# My Approach 
```cpp
class Solution {
  public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int> ret(nums.size());
        int i = 0, j = nums.size() - 1, insert = ret.size() - 1;
        while (insert >= 0) {
            if (abs(nums[i]) > abs(nums[j])) {
                ret[insert] = abs(nums[i]) * abs(nums[i]);
                insert--;
                i++;
            } else {
                ret[insert] = abs(nums[j]) * abs(nums[j]);
                insert--;
                j--;
            }
        }
        return ret;
    };
};
```
# Optimal Approach
```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
```
# learnings 
1. for sort inputs sorting is faster
2. My approach is theorytically correct
