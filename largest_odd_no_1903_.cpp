#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string largestOddNumber(string num) {
        string ans;
        int flag = 0;
        for (int j = num.length() - 1; j >= 0; j--) {
            if (flag > 0) {
                ans += num[j];
                continue;
            }
            if ((num[j] - '0') % 2 != 0) {
                ans += num[j];
                flag = 1;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.largestOddNumber("35427");
}
