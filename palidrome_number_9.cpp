#include <iostream>
using namespace std;
class Solution {
public:
  bool isPalindrome(int x) {
    int dup = x;
    long rev = 0;
    while (dup > 0) {
      int y = dup % 10;
      rev = (rev * 10) + y;
      dup = dup / 10;
    }
    return x == rev;
  }
};
int main() {
  Solution sol;
  cout << sol.isPalindrome(121) << endl;  // Output: 1 (true)
  cout << sol.isPalindrome(-121) << endl; // Output: 0 (false)
  cout << sol.isPalindrome(10) << endl;   // Output: 0 (false)
}
