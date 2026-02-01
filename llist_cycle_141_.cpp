#include <iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode() : val(), next(nullptr) {};
    ListNode(int i) : val(i), next(nullptr) {};
};
class Solution {
  public:
    bool hasCycle(ListNode *head) {
        struct ListNode *slow = head, *fast = head;
        while (slow != nullptr || fast != nullptr) {
            if (slow == fast) {
                if (fast == head) {
                    return 1;
                } 
            }
            slow = head->next;
            fast = head->next->next;
        }
        return 0;
    }
};
int main() {}
