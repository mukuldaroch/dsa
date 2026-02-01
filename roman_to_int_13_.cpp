#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int romanToInt(string s) {
        int pre = 0;
        int sum = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'I') {
                if (pre > 1) {
                    sum -= 1;
                } else {
                    sum = sum + 1;
                    pre = 1;
                }
            } else if (s[i] == 'V') {
                sum = sum + 5;
                pre = 5;
            } else if (s[i] == 'X') {
                if (pre > 10) {
                    sum -= 10;
                } else {
                    sum = sum + 10;
                    pre = 10;
                }
            } else if (s[i] == 'L') {
                sum = sum + 50;
                pre = 50;
            } else if (s[i] == 'C') {
                if (pre > 100) {
                    sum -= 100;
                } else {
                    sum = sum + 100;
                    pre = 100;
                }
            } else if (s[i] == 'D') {
                sum = sum + 500;
                pre = 500;
            } else if (s[i] == 'M') {
                sum = sum + 1000;
                pre = 1000;
            }
        }
        return sum;
    }
};

int main() {
    Solution test;
    cout << test.romanToInt("MCMXCIV");
}
