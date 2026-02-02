#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    long long maximumMedianSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        long maxsum = 0;
        int j = nums.size() - 1;
        for (int i = 0; i < nums.size() / 3; i++) {
            maxsum += nums[j - 1];
            j -= 2;
        }
        return maxsum;
    }
};

int main() {
    Solution test;
    vector<int> nums = {1, 1, 10, 10, 10, 10};
    cout << test.maximumMedianSum(nums);
}
