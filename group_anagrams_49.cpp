#include <filesystem>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        vector<vector<string>> to_return;
        for (string str1 : strs) {
            for (vector ch : to_return) {
                string str2 = ch[1];
                bool flag = 0;
                vector<string> temp = {str2};
                if (str2.length() == str1.length()) {
                    // check if ch str is anagram of st
                    unordered_map<char, int> hash_table;
                    for (char charr : str2) {
                        hash_table[charr]++;
                    }
                    for (char charr : str1) {
                        hash_table[charr]--;
                    }
                    for (auto it : hash_table) {
                        if (it.second != 0) {
                            continue;
                        } else
                            to_return.emplace_back(str1);
                    }
                    // if yes add it to the vector
                    // else continue to next vector
                } else if (str2.length() != str1.length()) {
                    // if the length of strings is not same
                    to_return.emplace_back(temp);
                    continue;
                } else if (flag != 0) {
                    // if no match found push the vector
                    to_return.emplace_back(temp);
                }
            }
        }
        return to_return;
    }
};
int main() {}
