#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        vector<int> ans;
        unordered_map<int, int> hash;
        int i = 0;
        for (auto a : nums2) {
            hash[a] = i;
            i++;
        }
        for (auto a : nums1) {
            int pos = hash[a];
            if (pos < nums2.size() - 1) {
                for (int x = pos + 1; x < nums2.size(); x++) {
                    if (nums2[x] > a) {
                        ans.push_back(nums2[x]);
                        break;
                    }
                    if (x == nums2.size() - 1) {
                        ans.push_back(-1);
                    }
                }
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    // vector<int> nums1 = {2, 4};
    // vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    auto ans = test.nextGreaterElement(nums1, nums2);
    for (auto a : ans) {
        cout << a << " ";
    }
}
