#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> ans(2, -1);

        // -------- lower bound --------
        int i = 0, j = nums.size();
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }

        // if target not found at all
        if (i == nums.size() || nums[i] != target)
            return ans;
        ans[0] = i; // first occurrence

        // -------- upper bound --------
        j = nums.size();
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] <= target) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        ans[1] = i - 1; // last occurrence

        return ans;
    }
};

int main() {
    Solution test;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    auto ans = test.searchRange(nums, 8);
    for (auto i : ans) {
        cout << i << ' ';
    }
    return 0;
}
