#include <iostream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If character seen and inside current window, move left
            if (lastSeen.count(c) && lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right; // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

// class Solution {
//   public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int> hash;
//         int max = 0;
//         int current = 0;
//         int j = 0;
//         for (auto i : s) {
//             hash[i]++;
//             if (hash[i] == 1) {
//                 current++;
//                 if (current > max) {
//                     max = current;
//                 }
//             } else {
//                 while (hash[i] > 1) {
//                     hash[s[j]]--;
//                     j++;
//                     if (hash[i] > 1) {
//                         current--;
//                     }
//                 }
//             }
//         }
//         return max;
//     }
// };

int main() {
    Solution test;
    string x = "pwwkew";
    cout << test.lengthOfLongestSubstring(x);
}
