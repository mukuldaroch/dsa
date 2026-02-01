#include <iostream>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> applyOperations(vector<int> &nums) {
    int j = nums.size() - 1;
    for (int x = 0; x <= j; x++) {
      if (nums[x] == 0) {
        swap(nums[x], nums[j]);
        j--;
      }
    }
    return nums;
  }
};
int main() {
  vector<int> nums = {1, 2, 2, 1, 1, 0};
  Solution test;
  test.applyOperations(nums);
  for (int i : nums) {
    cout << i << "\n";
  }
}
