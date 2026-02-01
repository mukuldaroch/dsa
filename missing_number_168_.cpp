#include <complex>
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
        int x = nums.size(), real = (((x * x) - x) / 2);
        int i = nums.size() + 1, next = (((i * i) - i) / 2);
        if (sum == real) {
            return nums.size();
        } else
            return next - sum;
    }
};

int main() {
    Solution test;
    vector<int> arr = {0, 1, 2, 4};
    cout << test.missingNumber(arr);
}
