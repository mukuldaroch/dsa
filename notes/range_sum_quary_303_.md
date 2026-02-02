```cpp

class NumArray {
  private:
    vector<int> prefixsum;

  public:
    NumArray(vector<int> &nums) {
        prefixsum.emplace_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            prefixsum.emplace_back(nums[i] + prefixsum[i - 1]);
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return prefixsum[right];
        } else
            return prefixsum[right] - prefixsum[left - 1];
    }
};
```
# Optimal Approach 
```cpp
class NumArray {
private:
    vector<int> preSum;
public:
    NumArray(vector<int>& nums)
    {
        int n = nums.size();
        preSum.resize(n);
        int sum = 0;
        for(int i = 0; i < n; i ++)
        {
            sum += nums[i];
            preSum[i] = sum;
        }
    }
    
    int sumRange(int left, int right)
    {
        if(left == 0) return preSum[right];
        return preSum[right] - preSum[left - 1];
    }
};
```
# learnings
 1. .resize() in vectors
 2. direct initilisatin is faster then .insert in vectors
