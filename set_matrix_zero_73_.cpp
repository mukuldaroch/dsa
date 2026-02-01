#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void setZeroes(vector<vector<int>> &matrix) {
        int size = matrix[0].size();
        vector<int> hash(size, 0);
        for (int i = 0; i < matrix.size(); i++) {
            int flag = 0;
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] == 0) {
                    hash[j]++;
                    flag++;
                }
            }
            if (flag > 0) {
                for (int j = 0; j < size; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 0; j < hash.size(); j++) {
            if (hash[j] > 0) {
                for (int i = 0; i < matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {
        {2, 7, 3, 6, 6}, {5, 9, 2, 5, 5}, {5, 3, 6, 6, 8}, {1, 1, 0, 0, 9},
        {7, 8, 2, 9, 2}, {1, 8, 3, 8, 5}, {5, 0, 2, 8, 9}, {0, 5, 8, 4, 0},
        {3, 9, 6, 0, 7}, {4, 1, 8, 6, 3}};
    test.setZeroes(matrix);
    int size = matrix[0].size();
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
