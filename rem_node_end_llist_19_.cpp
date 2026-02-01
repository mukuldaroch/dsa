#include <algorithm>
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count == n) {
            return head->next;
        }
        ListNode *temp2 = head;
        for (int i = 0; i < count - n - 1; i++) {
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
int main() {}
