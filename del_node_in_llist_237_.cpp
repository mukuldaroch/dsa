#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
  public:
    void deleteNode(ListNode *node) {
        node->val = node->next->val;
        if (node->next == nullptr) {
            return;
        }
        node->next = node->next->next;
    }
};
int main() {}
