#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == nullptr) {
            return head;
        }
        if (head->next == nullptr) {
            if (head->val == val) {
                return nullptr;
            } else
                return head;
        }
        ListNode ret(0), *curr = head, *prev = &ret;
        while (curr != nullptr) {
            if (curr->val != val) {
                prev->next = curr;
                prev = curr;
            }
            curr = curr->next;
        }
        prev->next = nullptr;
        return ret.next;
    }
};
int main() {}
