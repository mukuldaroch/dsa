#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int singleNonDuplicate(vector<int> &nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Make sure mid is even
            if (mid % 2 == 1) {
                mid--;
            }

            // Compare pair: nums[mid] and nums[mid+1]
            if (nums[mid] == nums[mid + 1]) {
                // Pair is fine, single must be on the right
                left = mid + 2;
            } else {
                // Single is on the left (or at mid itself)
                right = mid;
            }
        }

        return nums[left];
    }
};

int main() {
    Solution test;
    //-----------------{0, 1, 2, 3, 4, 5, 6, 7, 8}
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << test.singleNonDuplicate(nums);
}
