#include <iostream>
#include <vector>
using namespace std;

class MyQueue {
  public:
    vector<int> queue;
    int start = 0;

    MyQueue() {}

    void push(int x) { queue.emplace_back(x); }

    int pop() {
        int var = queue[start];
        start++;
        return var;
    }

    int peek() { return queue[start]; }

    bool empty() { return start == queue.size(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {}
