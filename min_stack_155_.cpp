#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

class MinStack {
  public:
    vector<int> stack;
    vector<int> minimum;
    MinStack() { minimum.push_back(INTMAX_MAX); }

    void push(int val) {
        stack.push_back(val);
        minimum.push_back(std::min(val, minimum.back()));
    }

    void pop() {
        stack.pop_back();
        minimum.pop_back();
    }

    int top() { return stack.back(); }

    int getMin() { return minimum.back(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {}
