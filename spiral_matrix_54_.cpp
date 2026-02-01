#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> arr;
        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        while (top <= bottom && left <= right) {
            // left to right
            for (int i = left; i <= right; i++) {
                arr.push_back(matrix[top][i]);
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++) {
                arr.push_back(matrix[i][right]);
            }
            right--;

            // right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
};

int main() {
    Solution test;

    vector<vector<int>> matrix = {{7, 8, 2, 9, 2},
                                  {1, 8, 3, 8, 5},
                                  {5, 0, 2, 8, 9},
                                  {0, 5, 8, 4, 0},
                                  {3, 9, 6, 0, 7}};
    auto arr = test.spiralOrder(matrix);
    for (auto i : arr) {
        cout << i << " ";
    }

    cout << '\n';
}
