#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> sortarr(vector<int> arr) {
    int lenght = arr.size();
    int i = 0, j = arr.size() - 1;

    for (int c = 0; c < lenght; c++) {
        if (arr[c] == 0) {
            swap(arr[c], arr[i]);
            i++;
        }
        if (arr[c] == 2) {
            swap(arr[c], arr[j]);
            c--;
            j--;
            lenght--;
        }
    }
    return arr;
}

int main() {
    vector<int> test = {0, 1, 2, 0, 1, 2, 0, 1, 0, 0};
    auto arr = sortarr(test);
    for (auto i : arr) {
        cout << i << endl;
    }
}
