#include <vector>
using namespace std;
int main() {
    class Solution {
      public:
        int removeDuplicates(vector<int> &nums) {
            int position = 1, count = 1;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i - 1] == nums[i]) {
                    continue;
                }
                if (nums[i - 1] < nums[i]) {
                    nums[position] = nums[i];
                    position++;
                    count++;
                }
            }
            return count;
        }
    };
}
