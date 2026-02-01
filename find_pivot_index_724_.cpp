#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int pivotIndex(vector<int> &nums) {
        int left_sum = 0, right_sum = 0;
        for (int x : nums) {
            right_sum += x;
        }
        right_sum -= nums[0];
        if (left_sum == right_sum) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            left_sum += nums[i - 1];
            right_sum -= nums[i];
            if (left_sum == right_sum) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution test;
    vector<int> nums = {-1, -1, 0, 0, -1, -1};
    cout << test.pivotIndex(nums);
    return 0;
}
