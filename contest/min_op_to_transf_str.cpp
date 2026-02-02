#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int minOperations(string s) {
        if (s.length() <= 1)
            return 0;
        for (int x : s) {
            if (x != s[0])
                return abs(s[0] - x);
        }
        return 0;
    };
};

int main() {}
