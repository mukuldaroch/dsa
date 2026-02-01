#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maximumCount(vector<int> &nums) {
        int positive = 0, negative = 0;
        for (int i : nums) {
            if (i < 0) {
                negative++;
            } else if (i > 0) {
                positive++;
            }
        }
        return negative > positive ? negative : positive;
    }
};
int main() {}
