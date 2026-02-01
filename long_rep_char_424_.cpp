#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int characterReplacement(string s, int k) {
        int len = 0;
        int i = 0;
        char previous = s[0];
        int k2 = k;
        for (int j = 1; j < s.length(); j++) {
            if (s[j] != previous && k2 > 0) {
                cout << "not equal" << endl;
                k2--;
            } else if (s[j] != previous && k2 == 0) {
                while (s[i] == previous) {
                    i++;
                }
                previous = s[i];
                cout << "previous  = " << previous << " and k,k2 " << k << ','
                     << k2 << endl;
            }
            cout << j << " " << i << '\n';
            len = max(len, (j - i) + 1);
        }
        return len;
    }
};

int main() {
    Solution test;
    cout << test.characterReplacement("ABBB", 2);
}
