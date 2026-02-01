#include <climits>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// class Solution {
//   public:
//     vector<int> majorityElement(vector<int> &nums) {
//         vector<int> ans;
//         unordered_map<int, int> hash;
//         int x = nums.size() / 3;
//         for (auto i : nums) {
//             hash[i]++;
//             if (hash[i] > x) {
//                 ans.push_back(i);
//                 hash[i] = INT_MIN;
//             }
//         }
//         return ans;
//     }
// };
//
class Solution {
  public:
    vector<int> majorityElement(vector<int> &nums) {
        int count1 = 0, count2 = 0;
        int current1 = 0, current2 = 0;
        vector<int> ans;
        for (auto i : nums) {
            if (i == current1) {
                count1++;
            } else if (i == current2) {
                count2++;
            } else if (count1 == 0) {
                current1 = i;
                count1 = 1;
            } else if (count2 == 0) {
                current2 = i;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        cout << current1 << "  " << current2 << endl;
        count1 = 0, count2 = 0;
        for (auto i : nums) {
            if (i == current1)
                count1++;
            else if (i == current2)
                count2++;
        }
        if (count1 > nums.size() / 3)
            ans.push_back(current1);
        if (count2 > nums.size() / 3 && current2 != current1)
            ans.push_back(current2);
        return ans;
    }
};

int main() {
    Solution test;
    vector<int> nums = {2, 1, 1, 3, 1, 4, 5, 6};
    vector<int> x = test.majorityElement(nums);
    // cout << x.size()<< endl;
    for (auto i : x) {
        cout << i << " ";
    }
}
