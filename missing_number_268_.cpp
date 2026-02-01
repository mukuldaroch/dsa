#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        int n = nums.size() + 1;
        int act_sum = (n * (n - 1)) / 2;
        cout << "act_sum = " << act_sum << endl;
        if (sum == act_sum) {
            return 0;
        } else if (sum > act_sum) {
            return sum - act_sum;
        } else if (sum < act_sum) {
            return act_sum - sum;
        }
        return 0;
    }
};

int main() {
    Solution test;

    vector<int> nums = {1};

    cout << test.missingNumber(nums);
}
