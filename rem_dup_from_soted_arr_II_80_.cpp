#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
            }
        }
        return 0;
    }
};

int main() {
    Solution test;
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    cout << test.removeDuplicates(arr);
    cout << '\n';
    for (int i : arr) {
        cout << i << '\n';
    }
}
