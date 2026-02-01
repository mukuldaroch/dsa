#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length())
      return false;
    unordered_map<char, int> freq;
    for (char ch : s)
      freq[ch]++;
    for (char ch : t) {
      if (freq[ch] == 0)
        return false;
      freq[ch]--;
    }

    return true;
  }
};

int main() {
  Solution test;
  string s = "mukul", t = "";
  cout << test.isAnagram(s, t) << endl;
  return 0;
}
