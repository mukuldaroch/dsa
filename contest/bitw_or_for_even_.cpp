#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int evenNumberBitwiseORs(vector<int> &nums) {
        int ans = 0;
        for (int a : nums) {
            if (a % 2 == 0) {
                ans |= a;
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    // vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> nums = {7, 9, 11};
    cout << test.evenNumberBitwiseORs(nums);
}
