#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int> &nums) {
        unordered_set<int> st;
        for (auto i : nums) {
            st.insert(i);
        }
        if (nums.size() == 0)
            return 0;
        int longest = 1;
        for (auto i : st) {
            int count = 1;
            int x = i;
            if (st.find(x - 1) == st.end()) {
                while (st.find(x + 1) != st.end()) {
                    x++;
                    count++;
                }
                longest = max(count, longest);
            }
        }
        return longest;
    }
};

int main() {
    Solution test;
    vector<int> nums = {4,  0,  -4, -2, 2, 5, 2,  0, -8, -8, -8,
                        -8, -1, 7,  4,  5, 5, -4, 6, 6,  -3};
    cout << test.longestConsecutive(nums);
}
