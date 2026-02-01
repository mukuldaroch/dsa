#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseString(vector<char> &s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};

int main() {
    Solution test;
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    test.reverseString(str);
    for (char c : str) {
        cout << c << '\n';
    }
}
