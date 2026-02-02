#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isTrionic(vector<int> &nums) {
        int size = nums.size() / 3;
        if (nums.size() < 4) {
            cout << "warning" << endl;
            return false;
        }
        if (nums.size() == 5) {
            cout << "warning2" << endl;
            return false;
        }
        int previous = INT_MIN;
        for (int j = 0; j <= size ; j++) {
            if (previous >= nums[j]) {
                cout << "condition1 " << previous << " > " << nums[j] << endl;
                return false;
            }
            previous = nums[j];
        }
        for (int j = size + 1; j <= size * 2; j++) {
            if (previous <= nums[j]) {
                cout << "condition2 " << previous << " < " << nums[j] << endl;
                return false;
            }
            previous = nums[j];
        }
        for (int j = (size * 2) + 1; j < nums.size(); j++) {
            if (previous >= nums[j]) {
                cout << "condition3 " << previous << " > " << nums[j] << endl;
                return false;
            }
            previous = nums[j];
        }
        return true;
    }
};

int main() {
    Solution test;
    // vector<int> nums = {1, 3, 5, 4, 2, 6};
    vector<int> nums = {1, 3, 5, 4, 2, 6};
    cout << test.isTrionic(nums);
}
