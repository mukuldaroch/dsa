#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int> ret(nums.size());
        int i = 0, j = nums.size() - 1, insert = ret.size() - 1;
        while (insert >= 0) {
            if (abs(nums[i]) > abs(nums[j])) {
                ret[insert] = abs(nums[i]) * abs(nums[i]);
                insert--;
                i++;
            } else {
                ret[insert] = abs(nums[j]) * abs(nums[j]);
                insert--;
                j--;
            }
        }
        return ret;
    };
};

int main() {
    Solution test;
    vector<int> nums = {-4, -1, 0, 3, 10};
    test.sortedSquares(nums);
    return 0;
}
