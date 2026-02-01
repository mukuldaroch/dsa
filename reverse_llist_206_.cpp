#include <iostream>
#include <vector>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
  public:
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = nullptr, *current = head, *next = nullptr;
        while (current != nullptr) {
            next = current->next; // Save next node
            current->next = prev; // Reverse link
            prev = current;       // Move prev to current
            current = next;       // Move to next node
        }
        return prev; // New head of the reversed list
    }
};
int main() {}
