
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> hash;
        int max = 0, majorityElement;

        for (int i : nums) {
            hash[i]++;
            if (hash[i] > max) {
                max = hash[i];
                majorityElement = i;
            }
        }
        return majorityElement;
    }
};

int main() {
    Solution test;
    vector<int> nums = {6, 5, 5};
    cout << test.majorityElement(nums);
}
