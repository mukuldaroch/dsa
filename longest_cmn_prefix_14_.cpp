#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        string ans = strs[0];
        int length;
        for (int i = 1; i < strs.size(); i++) {
            length = min(ans.length(), strs[i].length());
            if (ans.length() > strs[i].length()) {
                ans.resize(strs[i].length());
            }
            for (int j = 0; j < length; j++) {
                if (ans[j] != strs[i][j]) {
                    if (j >= 0) {
                        ans.resize(j);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    vector<string> strs = {""};
    // vector<string> strs = {"dog", "racecar", "car"};
    cout << test.longestCommonPrefix(strs);
    string str = "flower";
    // str.resize(3);
    // cout << str << endl;
}
