#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows > 0) {
            vector<int> first = {1};
            ans.push_back(first);
        }
        for (int x = 1; x < numRows; x++) {
            vector<int> temp = {};
            temp.push_back(1);
            for (int i = 1; i < x; i++) {
                temp.push_back(ans[x - 1][i - 1] + ans[x - 1][i]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};

int main() {
    Solution test;
    auto x = test.generate(5);
    for (auto i : x) {
        for (int y : i) {
            cout << y << "  ";
        }
        cout << endl;
    }
}
