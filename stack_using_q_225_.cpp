#include <iostream>
#include <vector>
using namespace std;

class MyStack {
  public:
    vector<int> stack;

    void push(int x) { stack.push_back(x); }

    int pop() {
        int val = stack.back();
        stack.pop_back();
        return val;
    }

    int top() { return stack.back(); }

    bool empty() { return stack.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main() {
    MyStack myStack;

    cout << myStack.empty() << '\n'; // return False
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << '\n';   // return 2
    cout << myStack.pop() << '\n';   // return 2
    cout << myStack.top() << '\n';   // return 2
    cout << myStack.empty() << '\n'; // return False
}
