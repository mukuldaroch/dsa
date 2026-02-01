#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int mostFrequentEven(vector<int> &nums) {
        unordered_map<int, int> freqMap;
        int maxFreq = 0, result = -1;

        for (int num : nums) {
            if (num % 2 == 0) {
                freqMap[num]++;
                if (freqMap[num] > maxFreq ||
                    (freqMap[num] == maxFreq && num < result)) {
                    maxFreq = freqMap[num];
                    result = num;
                }
            }
        }

        return result;
    }
};

int main() {}
