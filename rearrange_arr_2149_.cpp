#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> rearrangeArray(vector<int> &nums) {
        vector<int> positive = {};
        vector<int> negative = {};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                positive.emplace_back(nums[i]);
            } else {
                negative.emplace_back(nums[i]);
            }
        }
        int j = 0;
        for (int i = 0; i < positive.size(); i++) {
            nums[j] = positive[i];
            nums[j + 1] = negative[i];
            j += 2;
        }
        return nums;
    }
};

int main() {

    Solution test;
    vector<int> vec = {3, 1, -2, -5, 2, -4};
    test.rearrangeArray(vec);
    for (auto i : vec) {
        cout << i << '\n';
    }
}
