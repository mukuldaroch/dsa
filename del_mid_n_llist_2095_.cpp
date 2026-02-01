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
    ListNode *deleteMiddle(ListNode *head) {
        if (head->next == nullptr) {
            return nullptr;
        }
        if (head->next->next == nullptr) {
            head->next = nullptr;
            return head;
        }
        ListNode *temp = head;
        int count = 0;
        while (temp) {
            temp = temp->next;
            count++;
        }
        count = count / 2;
        ListNode *temp2 = head;
        for (int i = 1; i < count; i++) {
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};

int main() {}
