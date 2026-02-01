#include <iostream>
using namespace std;

class Solution {
  public:
    int maxDepth(string s) {
        int max = 0;
        int count = 0;
        for (auto i : s) {
            if (i == '(') {
                count++;
                if (count > max) {
                    max = count;
                }
            } else if (i == ')') {
                count--;
            }
        }
        return max;
    }
};

int main() {
    Solution test;
    cout << test.maxDepth("(1+(2*3)+((8)/4))+1");
}
