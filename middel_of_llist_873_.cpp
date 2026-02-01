#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int data;
    struct ListNode *next;
    ListNode() : data(), next(nullptr) {};
    ListNode(int val) : data(val), next(nullptr) {};
    ListNode(int val, struct ListNode *rest) : data(val), next(rest) {};
};
class Solution {
  public:
    ListNode *middleNode(ListNode *head) {
        struct ListNode *temp = head, *temp2 = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        count /= 2;
        for (int i = 0; i < count; i++) {
            temp2 = temp2->next;
        }
        return temp2;
    }
};
int main() {}
