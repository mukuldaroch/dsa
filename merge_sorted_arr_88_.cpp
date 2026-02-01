#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int x = m - 1, i = nums1.size() - 1;
        for (int j = nums2.size() - 1; i > 0;) {
            if (nums1[x] > nums2[nums2.size() - 1]) {
                nums1[i] = nums1[x];
                x--;
                i--;
                continue;
            } else
                nums1[i] = nums2[nums2.size() - 1];
            i--;
            nums2.pop_back();
        }
    }
};

int main() {
    Solution test;
    vector<int> nums1 = {1, 3, 4, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    test.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
}
