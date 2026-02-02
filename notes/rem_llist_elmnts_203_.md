# My Approach 
```cpp
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
```
# Bettter Code 
```cpp
class Solution {
  public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);  // Dummy node to handle edge cases smoothly
        dummy.next = head;
        ListNode* prev = &dummy, *curr = head;
        
        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;  // Skip the node
            } else {
                prev = curr;  // Move prev forward
            }
            curr = curr->next;  // Move curr forward
        }
        
        return dummy.next;
    }
};
```
# Learnings 
1) if condition == nullptr it is false 
