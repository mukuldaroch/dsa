#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int maxProfit = 0;
        int lowestPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lowestPrice) {
                lowestPrice = prices[i];
                continue;
            }
            int temp = prices[i] - lowestPrice;
            if (temp > maxProfit) {
                maxProfit = temp;
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution test;
    vector<int> vec = {7,1,5,3,6,4};
    cout << test.maxProfit(vec);
}
