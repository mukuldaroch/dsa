#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        vector<int> ret(2, 0);
        while (i < j) {
            if (target == numbers[i] + numbers[j]) {
                ret[0] = i + 1;
                ret[1] = j + 1;
                return ret;
            } else if (target > numbers[i] + numbers[j]) {
                i++;
                continue;
            } else if (target < numbers[i] + numbers[j]) {
                j--;
            }
        }
        return ret;
    }
};

int main() {
    Solution test;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    test.twoSum(numbers, target);
    return 0;
}
