#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        int max = INT_MIN;
        int current = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (max < current) {
                max = current;
            }
            current += nums[i];
            if (current < 0) {
                current = 0;
            }
        }
        return max;
    }
};

int main() {
    Solution test;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> num = {5, 4, -1, 7, 8};
    cout << test.maxSubArray(nums);
    return 0;
}
