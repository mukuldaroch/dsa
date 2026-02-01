#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int> &nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: Find first decreasing element from the back
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            // Step 2: Find just-larger-than element from the back
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse from i+1 to end
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() {
    Solution test;
    // vector<int> nums = {9, 6, 3, 4, 8, 3, 4, 2, 1, 0};
    vector<int> nums = {3, 2, 1};
    test.nextPermutation(nums);
    for (auto i : nums) {
        std::cout << i << '\n';
    }
}
