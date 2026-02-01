#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<vector<int>> &matrix) {
        int size = matrix[0].size();
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; i > j; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            int x = 0;
            for (int j = matrix[0].size() - 1; x < j; j--) {
                swap(matrix[i][x], matrix[i][j]);
                x++;
            }
        }
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {
        {2, 7, 6, 6}, {5, 3, 6, 8}, {1, 1, 0, 9}, {3, 9, 0, 7}};

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    test.rotate(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
