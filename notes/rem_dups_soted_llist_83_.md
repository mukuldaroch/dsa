# My Approach 
```cpp
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
```
# Better Code 
```cpp
class Solution {
  public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while (current && current->next) {
            if (current->val == current->next->val) {
                current->next = current->next->next; // Skip duplicate
            } else {
                current = current->next; // Move forward
            }
        }
        return head;
    }
};
```
# Learnings 
1.

