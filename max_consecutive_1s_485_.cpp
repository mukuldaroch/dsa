#include <vector>
using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int count = 0;
        int max = 0;
        for (int i : nums) {
            if (i == 1) {
                count++;
                if (count > max) {
                    max = count;
                }
                continue;
            }
            count = 0;
        }
        return max;
    }
};

int main() {}
