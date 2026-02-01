#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // NORMAL BINARY SEARCH
    int search(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return -1;
    }

    // LOWER BOUND -> first index where nums[idx] >= target
    int lowerBound(vector<int> &nums, int target) {
        int i = 0, j = nums.size(); // notice: j = n (not n-1)
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        return i; // or j, same thing
    }

    // UPPER BOUND -> first index where nums[idx] > target
    int upperBound(vector<int> &nums, int target) {
        int i = 0, j = nums.size();
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] <= target) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        return i;
    }
};

int main() {
    Solution test;
    vector<int> nums = {-1, 0, 3, 5, 9, 9, 9};
    // cout << test.lowerBound(nums, 9);
    cout << test.upperBound(nums, 9);
    return 0;
}
