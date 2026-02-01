#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int j = nums.size(), f = 0;
        for (int i = 0; i < j; i++) {
            if (nums[i] == 0 && i != f) {
                swap(nums[i], nums[f]);
                f++;
            } else if (nums[i] == 0) {
                f++;
                continue;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[j - 1]);
                i--;
                j--;
            }
        }
    }
};

int main() {
    Solution test;
    vector<int> nums = {0, 1, 2, 0};
    test.sortColors(nums);
    return 0;
}
