#include <iostream>
using namespace std;

class Solution {
  public:
    string reverseWords(string s) {
        string ans;
        string temp;
        int count = 0;
        for (int j = s.length() - 1; j >= 0; j--) {
            if (s[j] != ' ') {
                temp.push_back(s[j]);
            }
            if (temp.length() != 0 && (s[j] == ' ' || j == 0)) {
                if (count != 0) {
                    ans.push_back(' ');
                }
                for (int i = temp.length() - 1; i >= 0; i--) {
                    ans.push_back(temp[i]);
                }
                temp = "";
                count++;
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.reverseWords("the sky is blue");
    // cout << test.reverseWords("hello from mukul");
    return 0;
}
