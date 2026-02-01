#include <complex>
#include <iostream>
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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *current = head->next;
        ListNode *addr = head;
        int p_val = head->val;
        while (current != nullptr) {
            if (p_val != current->val) {
                p_val = current->val;
                addr->next = current;
                addr = current;
            }
            current = current->next;
        }
        addr->next = nullptr;
        return head;
    }
};

int main() {}
