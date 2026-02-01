#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> hash;
        string temp = s;
        for (auto i : t) {
            if (hash[i] > 0) {
                continue;
            }
            hash[i]++;
            for (int j = 0; j < s.length(); j++) {
                if (temp[j] == i) {
                    temp[j] = i;
                }
            }
        }
        cout << temp << "  " << t << endl;
        if (temp == t) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution test;
    cout << test.isIsomorphic("paper", "title");
}
