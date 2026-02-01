#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> maxSubArray(vector<int> &nums) {
        int max = INT_MIN;
        int current = 0;
        vector<int> temp = {};
        for (int i = 0; i < nums.size(); i++) {
            current += nums[i];
            temp.emplace_back(nums[i]);
            if (max < current) {
                max = current;
            }
            if (current < 0) {
                current = 0;
                temp.clear();
            }
        }
        return temp;
    }
};

int main() {
    Solution test;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> num = {5, 4, -1, 7, 8};
    vector<int> test2 = test.maxSubArray(nums);
    for (auto i : test2) {
        cout << i << '\n';
    }
    return 0;
}
