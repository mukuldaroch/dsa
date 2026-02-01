#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int subarraySum(vector<int> &nums, int k) {
        unordered_map<int, int> priorityq;
        int j = 0, count = 0;
        for (int i = 0; i < nums.size();) {
        }
        return count;
    }
};

int main() {
    Solution test;
    // vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> num = {1, 2, 3};
    cout << test.subarraySum(num, 3);
    return 0;
}
