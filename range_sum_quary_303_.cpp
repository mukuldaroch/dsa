#include <iostream>
#include <vector>
using namespace std;

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

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main() {}
