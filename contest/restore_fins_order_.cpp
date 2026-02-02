#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends) {
        unordered_map<int, int> hash;
        vector<int> ans;
        for (auto a : friends) {
            hash[a] = true;
        }
        for (auto a : order) {
            if (hash[a] == true) {
                ans.push_back(a);
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    vector<int> order = {3, 1, 2, 5, 4};
    vector<int> friends = {1, 3, 4};
    auto ans = test.recoverOrder(order, friends);
    for (auto a : ans) {
        cout << a << " ";
    }
}
