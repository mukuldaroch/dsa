#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        if (digits[digits.size() - 1] < 9) {
            digits[digits.size() - 1]++;
        } else
            for (int i = digits.size() - 1; i >= 0; i--) {
                if (digits[i] != 9) {
                    digits[i]++;
                    return digits;
                }
                if (i == 0) {
                    digits[i] = 1;
                    digits.emplace_back(0);
                    return digits;
                }
                if (digits[i] == 9) {
                    digits[i] = 0;
                    continue;
                }
            }
        return digits;
    }
};

int main() {
    Solution test;
    vector<int> num = {8, 9, 9, 9};
    test.plusOne(num);
    cout << '\n';
    for (int i : num) {
        cout << i;
    }
    return 0;
}
