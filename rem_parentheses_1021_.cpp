#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    string removeOuterParentheses(string s) {
        if (s.length() < 3) {
            return "";
        }
        string ans;
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '(') {
                count += 1;
            } else if (s[i] == ')') {
                count -= 1;
            }
            if (count == 0) {
                i++;
                count++;
                continue;
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.removeOuterParentheses("((())())(()())");
    // test.removeOuterParentheses("(())(()())");
}
