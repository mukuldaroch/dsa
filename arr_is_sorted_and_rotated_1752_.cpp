#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool check(vector<int> &nums) {
        int flag = -1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                continue;
            } else if (nums[i - 1] > nums[i]) {
                if (flag < 0) {
                    flag++;
                    if (nums[nums.size() - 1] <= nums[0]) {
                        continue;
                    } else
                        return false;
                } else
                    return false;
            }
        }
        return true;
    }
};

int main() {}
