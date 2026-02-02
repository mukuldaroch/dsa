#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    long long numOfSubsequences(string s) {
        unordered_map<char, int> map;
        for (auto i : s) {
            map[i]++;
        }
        long count = 0;

        int Lnum = map['L'];
        int Cnum = map['C'];
        int Tnum = map['T'];

        min(Lnum ,min(Cnum,Tnum));
        return count;
    }
};

int main() {
    Solution test;
    string s = "LCCT";
    cout << test.numOfSubsequences(s);
}
