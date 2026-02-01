#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int longestOnes(vector<int> &nums, int k) {
        unordered_map<int, int> hash;
        int prepost = 1;
        int i = 0;
        int len = 0;
        int zeros = 1;
        int k2 = k;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0 && k2 == 0 && k > 0) {
                i = hash[prepost] + 1;
                k2++;
                prepost++;
            }
            if (nums[j] == 0 && k2 > 0) {
                hash[zeros] = j;
                zeros++;
                k2--;
                cout << j << " - " << i << '\n';
                len = max(len, (j - i) + 1);
            } else if (nums[j] == 1) {
                cout << j << " - " << i << '\n';
                len = max(len, (j - i) + 1);
            } else if (nums[j] == 0 && k == 0) {
                i = j + 1;
            }
        }
        return len;
    }
};

int main() {
    Solution test;
    vector<int> nums = {0, 0, 1, 1, 1, 0, 0};
    cout << test.longestOnes(nums, 0);
    return 0;
}
