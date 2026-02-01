#include <cctype>
#include <iostream>
using namespace std;

class Solution {
  public:
    int myAtoi(string s) {
        int ans = 0;
        int sign = 1;
        int flag = 0;

        for (auto i : s) {
            if (!isdigit(i)) {
                if (flag == 0 && (i == '+' || i == '-' || i == ' ')) {
                    if (i == '+') {
                        sign = +1;
                        flag = 1;
                        continue;
                    } else if (i == '-') {
                        sign = -1;
                        flag = 1;
                        continue;
                    }
                } else {
                    break;
                }
                continue;
            }

            // overflow check
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (i - '0') > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans *= 10;
            ans += i - '0';
            flag = 1;
        }
        return ans * sign;
    }
};

int main() {
    Solution test;
    cout << test.myAtoi(" -042 7");
}
