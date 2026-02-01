#include <cctype>
#include <iostream>

using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
        bool x = true;
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (isalnum(s[i]) == 0 && isalnum(s[j]) == 0) {
                continue;
            }
            if (isalnum(s[i]) == 0) {
                j++;
                continue;
            }
            if (isalnum(s[j]) == 0) {
                i--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                x = false;
                return x;
            }
        }
    }
};

int main() {
    Solution test;
    string s = "0P";
    cout << test.isPalindrome(s);
    return 0;
}
